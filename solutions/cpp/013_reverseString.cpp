#include <iostream>
#include <string>
using namespace std;

int main() {
    string theStr;
    cout << "Enter your string: ";
    cin >> theStr;
    string reversedString = "";
    for (int i = theStr.length() - 1; i >= 0; i--) {
        reversedString += theStr[i];
    }
    cout << "Reversed String: " << reversedString << endl;
    return 0;
}