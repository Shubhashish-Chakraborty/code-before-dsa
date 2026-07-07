// scripts/updateTable.js
const fs = require('fs');
const path = require('path');
const { google } = require('googleapis');
require('dotenv').config();

const ROOT_DIR = path.resolve(__dirname, '..');
const README_PATH = path.join(ROOT_DIR, 'problems', 'README.md');
const SOLUTIONS_DIR = path.join(ROOT_DIR, 'solutions');

// Map directory names to display names in Markdown
const LANG_MAP = {
    cpp: 'C++',
    c: 'C',
    python: 'Python',
    javascript: 'JavaScript'
};

async function getYouTubeLinks(playlistId, apiKey) {
    const youtube = google.youtube({ version: 'v3', auth: apiKey });
    const videoLinks = new Map();
    let pageToken = undefined;

    try {
        do {
            const res = await youtube.playlistItems.list({
                part: ['snippet'],
                playlistId: playlistId,
                maxResults: 50,
                pageToken: pageToken,
            });

            const items = res.data.items || [];
            //   for (const item of items) {
            //     const title = item.snippet?.title || '';
            //     const videoId = item.snippet?.resourceId?.videoId;
            //     const match = title.match(/(?:ep|problem|#)\s*(\d+)/i);
            //     if (match && videoId) {
            //       const epNumber = parseInt(match[1], 10);
            //       videoLinks.set(epNumber, `https://youtu.be/${videoId}`);
            //     }
            //   }

            for (const item of items) {
                const title = item.snippet?.title || '';
                const videoId = item.snippet?.resourceId?.videoId;

                const match = title.match(/#(\d+)\s*$/);
                if (match && videoId) {
                    const epNumber = parseInt(match[1], 10);
                    videoLinks.set(epNumber, `https://youtu.be/${videoId}`);
                }
            }

            pageToken = res.data.nextPageToken;
        } while (pageToken);
    } catch (error) {
        console.error('Error fetching YouTube data:', error);
    }

    return videoLinks;
}

function getLocalSolutions() {
    const solutions = new Map();

    if (!fs.existsSync(SOLUTIONS_DIR)) return solutions;

    const langDirs = fs.readdirSync(SOLUTIONS_DIR);

    for (const lang of langDirs) {
        const langPath = path.join(SOLUTIONS_DIR, lang);
        if (!fs.statSync(langPath).isDirectory()) continue;

        const files = fs.readdirSync(langPath);
        for (const file of files) {
            // Expecting format like 001_evenOdd.cpp
            const match = file.match(/^0*(\d+)_/);
            if (match) {
                const epNumber = parseInt(match[1], 10);
                const displayLang = LANG_MAP[lang] || lang;
                const relativePath = `../solutions/${lang}/${file}`;
                const markdownLink = `**[${displayLang}](${relativePath})**`;

                if (!solutions.has(epNumber)) {
                    solutions.set(epNumber, []);
                }
                solutions.get(epNumber).push(markdownLink);
            }
        }
    }

    return solutions;
}

async function updateReadme() {
    console.log('Gathering local solutions...');
    const solutionsData = getLocalSolutions();

    let youtubeData = new Map();
    if (process.env.YOUTUBE_API_KEY && process.env.PLAYLIST_ID) {
        console.log('Fetching YouTube videos...');
        youtubeData = await getYouTubeLinks(process.env.PLAYLIST_ID, process.env.YOUTUBE_API_KEY);
    } else {
        console.log('Skipping YouTube fetch (Missing API Key or Playlist ID)');
    }

    const readmeContent = fs.readFileSync(README_PATH, 'utf-8');

    const tableStartMarker = '## 📚 All Problems';
    const tableEndMarker = '## 📝 Problem Descriptions';

    const startIndex = readmeContent.indexOf(tableStartMarker);
    const endIndex = readmeContent.indexOf(tableEndMarker);

    if (startIndex === -1 || endIndex === -1 || endIndex <= startIndex) {
        throw new Error('Could not find the problem table section in problems/README.md');
    }

    const beforeTable = readmeContent.slice(0, startIndex);
    const afterTable = readmeContent.slice(endIndex);
    const tableContent = readmeContent.slice(startIndex, endIndex);

    const lines = tableContent.split('\n');
    const updatedLines = lines.map(line => {
        // Check if line is a table row starting with a number, e.g., "| 1 |"
        const rowMatch = line.match(/^\|\s*(\d+)\s*\|/);
        if (rowMatch) {
            const epNumber = parseInt(rowMatch[1], 10);
            const parts = line.split('|');

            if (parts.length >= 6) {
                // Update Solutions
                if (solutionsData.has(epNumber)) {
                    parts[4] = ` ${solutionsData.get(epNumber).join(' , ')} `;
                }

                // Update YouTube Link
                if (youtubeData.has(epNumber)) {
                    parts[5] = ` [Watch](${youtubeData.get(epNumber)}) `;
                } else if (!parts[5].includes('youtu.be') && !parts[5].includes('watch?v=')) {
                    // Default fallback
                    parts[5] = ` [Watch](https://youtube.com/@shubhdevs) `;
                }
            }
            return parts.join('|');
        }
        return line;
    });

    const newReadmeContent = beforeTable + updatedLines.join('\n') + afterTable;
    fs.writeFileSync(README_PATH, newReadmeContent, 'utf-8');
    console.log('Successfully updated problems/README.md!');
}

updateReadme().catch(console.error);