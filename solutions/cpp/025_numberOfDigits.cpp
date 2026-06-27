#include <bits/stdc++.h>

int main() {
  long long number;
  std::cout << "Enter the Number: ";
  std::cin >> number;
  long long temp = number;
  int count = 0;
  while (temp > 0) {
    count++;
    temp /= 10;
  }
  std::cout << "The Number of Digits in " << number << " is: " << count << "\n";
  return 0;
}