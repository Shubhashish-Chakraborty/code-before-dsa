#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter the Number: ";
    cin >> number;

    bool isPrime = true;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int x = 2; x <= number - 1; x++) {
            if (number % x == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " is A PRIME NUMBER!";
    } else {
        cout << number << " is NOT A PRIME NUMBER!!";
    }


    return 0;
}