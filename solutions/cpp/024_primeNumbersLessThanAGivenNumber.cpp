#include <bits/stdc++.h>

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
  long long limit;
  std::cout << "Enter the Limit: ";
  std::cin >> limit;

  for (long long i = 2; i <= limit; i++) {
    if (checkPrimeNumber(i)) {
      std::cout << i << " ";
    }
  }
  std::cout << "\n";
  return 0;
}