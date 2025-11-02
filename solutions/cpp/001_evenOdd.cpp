#include <bits/stdc++.h>
using namespace std;

int main() {

    int number;
    cout << "Enter the Number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is EVEN!!";
    } else {
        cout << number << " is ODD!";
    }
    
    return 0;
}