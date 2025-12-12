#include <iostream>
using namespace std;

int main() {
    string theString;
    cout << "Enter the String: ";
    cin >> theString;

    int freqArr[256] = {0};

    for (char ch: theString) {
        freqArr[ch]++;
    }

    // at this point we have a array which has the occur.. of those charachters!
    for (char ch: theString) {
        if (freqArr[ch] > 0) {
            cout << ch << " -> " << freqArr[ch] << endl;
            freqArr[ch] = 0;
        }
    }
    return 0;
}