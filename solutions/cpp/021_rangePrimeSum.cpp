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
  std::cout << "Enter the range [sp,ep]: ";
  std::cin >> sp >> ep;

  if (sp >= ep) {
    std::cout << "Invalid Range!\n";
    return -1;
  }
  
  long long primeSum = 0;
  for (long long i = sp; i <= ep; i++) {
    if (checkPrimeNumber(i)) {
      primeSum += i;
    }
  }

  std::cout << "Sum of Prime Numbers within the range is: " << primeSum << "\n";
  return 0;
}