#include <iostream>

int main() {
  int position;
  std::cout << "Enter the position: ";
  std::cin >> position;
  long long first = 0;
  long long second = 1;

  if (position == 0) {
    std::cout << 0 << "\n";
    return 0;
  }

  for (long long i = 1; i < position; i++) {
    long long next = first + second;
    first = second;
    second = next;
  }
  std::cout << second << "\n";
  return 0;
}