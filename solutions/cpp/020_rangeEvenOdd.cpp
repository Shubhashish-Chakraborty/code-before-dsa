#include <iostream>

int main() {
  long long sp, ep;
  std::cout << "Enter the range [sp,ep]: ";
  std::cin >> sp >> ep;

  if (sp >= ep) {
    std::cout << "Invalid Range!\n";
    return -1;
  }

  long long evenSum = 0;
  long long oddSum = 0;

  for (long long i = sp; i <= ep; i++) {
    if (i % 2 == 0) {
      evenSum += i;
    } else {
      oddSum += i;
    }
  }

  std::cout << "Even numbers sum: " << evenSum << "\n";
  std::cout << "Odd numbers sum: " << oddSum << "\n";
  return 0;
}