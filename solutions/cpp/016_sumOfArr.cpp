#include <iostream>
using namespace std;

int main() {
  int numberOfElements;
  cout << "Enter the number of elements of your Array: ";
  cin >> numberOfElements;

  int theArr[numberOfElements];
  for (int i = 0; i < numberOfElements; i++) {
    cin >> theArr[i];
  }

  long long sum = 0; // 13 14 15 26
  for (int x: theArr) {
    sum += x;
  }
  cout << "The sum of elements of your Array: " << sum << "\n";
  return 0;
}