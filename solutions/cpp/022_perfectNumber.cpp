#include <iostream>

int main() {
  long long number;
  std::cout << "Enter the number: ";
  std::cin >> number;

  long long sum = 0;
  // possible divisors!
  for (long long i = 1; i < number; i++) {
    if (number % i == 0) {
      sum += i; // i -> possible divisor!
    }
  }

  if (sum == number) {
    std::cout << number << " is a Perfect Number \n";
  } else {
    std::cout << number << " is NOT a Perfect Number \n";
  }
  return 0;
}