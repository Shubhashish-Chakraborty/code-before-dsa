#include <iostream>

bool checkPrimeNumber(long long NUMBER) {
  bool isPrime = true;
  if (NUMBER <= 1) {
    isPrime = false;
  } else {
    for (int x = 2; x <= NUMBER - 1; x++) {
      if (NUMBER % x == 0) {
        isPrime = false;
        break;
      }
    }
  }
  if (isPrime) {
    return true;
  } else {
    return false;
  }
}

int main() {
  long long sp, ep;
  std::cout << "Enter Starting & Ending Point: ";
  std::cin >> sp >> ep;

  std::vector<long long> possiblePrimeNumbers = {};
  for (long long i = sp; i <= ep; i++) {
    if (checkPrimeNumber(i)) {
      possiblePrimeNumbers.push_back(i);
    }
  }
  std::cout << "Possible Prime Numbers: ";
  for (long long n: possiblePrimeNumbers) {
    std::cout << n << " ";
  }
  std::cout << "\n";

  return 0;
}