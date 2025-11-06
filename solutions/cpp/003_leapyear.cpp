#include <bits/stdc++.h>
using namespace std;

int main() {

    long long year;
    cout << "Enter the year: ";
    cin >> year;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        cout << year << " is a Leap Year!";
    } else {
        cout << year << " is NOT A LEAP YEAR!!!";
    }

    return 0;
}