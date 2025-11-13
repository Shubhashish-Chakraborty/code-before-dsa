#include <bits/stdc++.h>
using namespace std;

bool isStringPallindrome(string originalString) {
    string reversedString = "";
    for (int i = originalString.length() - 1; i >= 0; i--) {
        reversedString = reversedString + originalString[i];
    }

    if (reversedString == originalString) {
        return true;
    } else {
        return false;
    }
}

bool isNumberPallindrome(long long originalNumber) {
    long long reversedNumber = 0;
    long long temp = originalNumber;

    while (temp > 0) {
        int digit = temp % 10;
        reversedNumber = (reversedNumber * 10) + digit;
        temp = temp / 10;
    }

    if (reversedNumber == originalNumber) {
        return true;
    } else {
        return false;
    }
    
}

int main() {
    
    long long number;
    cout << "Enter your number: ";
    cin >> number;

    if (isNumberPallindrome(number)) {
        cout << number << " is PALLINDROME!!!";
    } else {
        cout << number << " is NOT PALLINDROME!!!";
    }

    return 0;
}