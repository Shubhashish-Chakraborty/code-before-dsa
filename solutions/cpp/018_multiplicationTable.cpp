#include <iostream>
using namespace std;

int main() {
  long long number;
  cout << "Enter the number: ";
  cin >> number;

  for (int i = 1; i <= 20; i++) {
    cout << number << " X " << i << " = " << number * i << "\n";
  }

  return 0;
}