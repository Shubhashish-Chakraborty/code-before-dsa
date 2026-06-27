#include <bits/stdc++.h>

long long getFactorial(int NUMBER) {
    long long fact = 1;
    for (int i = 1; i <= NUMBER; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    long long sum = 0;
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;
    long long factorial = getFactorial(num);
    while (factorial > 0) {
        int digit = factorial % 10;
        sum += digit;
        factorial /= 10;
    }
    std::cout << "Sum of Digits: " << sum << "\n";
    return 0;
}