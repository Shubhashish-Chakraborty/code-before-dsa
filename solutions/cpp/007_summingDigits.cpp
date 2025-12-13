#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter the Number: ";
    cin >> number;
    long long temp = number;
    
    long long sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    cout << "The Sum of the digits of " << number << " is = " << sum;
    return 0;
}