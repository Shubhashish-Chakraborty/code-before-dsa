#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    string reversedString = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedString += str[i];
    }

    cout << reversedString;

    return 0;
}