#include <bits/stdc++.h>

int main() {

    long long number;
    std::cout << "Enter the Number: ";
    std::cin >> number;

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
        std::cout << number << " is AN NARCISSISTIC NUMBER!!" << std::endl;
    } else {
        std::cout << number << " is NOT AN NARCISSISTIC NUMBER!!!!" << std::endl;
    }

    return 0;
}