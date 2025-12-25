#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string theStr;
    cout << "Enter your string: ";
    getline(cin,theStr);
    char vowels[5] = {'a' , 'e' , 'i' , 'o' , 'u'};
    int vowelCount = 0;
    int consonantCount = 0;
    for (char ch: theStr) {
        if (isalpha(ch)) {
            if (find(begin(vowels), end(vowels), ch) != end(vowels)) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    return 0;
}