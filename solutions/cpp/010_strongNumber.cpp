#include <iostream>
using namespace std;

long long CALCULATE_FACTORIAL(long long num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    long long number;
    cout << "Enter the Number: ";
    cin >> number;
    long long temp = number;
    long long sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += CALCULATE_FACTORIAL(digit);
        temp = temp / 10;
    }
    if (sum == number) {
        cout << number << " is a STRONG NUMBER!!" << endl;
    } else {
        cout << number << " is NOT A STRONG NUMBER!!" << endl;
    }
    return 0;
}