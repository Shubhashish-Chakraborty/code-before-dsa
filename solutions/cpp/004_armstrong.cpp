#include <iostream>
using namespace std;

int main() {

    long long number;
    cout << "Enter the Number: ";
    cin >> number;

    long long temp = number; // copy!!

    // calculating the number of digits first!
    int numberOfDigits = 0;
    while (temp > 0) {
        numberOfDigits++;
        temp /= 10;
    }

    temp = number;
    long long sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + (pow(digit, numberOfDigits));
        temp /= 10;
    }

    if (sum == number) {
        cout << number << " is AN ARMSTRONG NUMBER!!" << endl;
    } else {
        cout << number << " is NOT AN ARMSTRONG NUMBER!!!!" << endl;
    }

    return 0;
}