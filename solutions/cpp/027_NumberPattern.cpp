#include <bits/stdc++.h>

int main() {
    int number;
    std::cout << "Enter Number: ";
    std::cin >> number;
    int count = 1;
    for (int i = 1; i <= number; i++) { // row
        for (int j = 1; j <= i; j++) {
            std::cout << count << " ";
            count++;
        }
        std::cout << "\n";
    }
    return 0;
}