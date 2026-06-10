#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool checkArmstrongNumber(long long NUMBER) {
  long long temp = NUMBER;
  // calculate the number of digits:
  int numberOfDigits = 0;
  while (temp > 0) {
    numberOfDigits++;
    temp /= 10;
  }
  temp = NUMBER;
  // armstrong or not:
  long long sum = 0;
  while (temp > 0) {
    int dig = temp % 10;
    sum += pow(dig, numberOfDigits);
    temp /= 10;
  }
  if (sum == NUMBER) {
    return true; // the number is an armstrong number
  } else {
    return false;
  }
  return -1;
}

int main() {
  long long sp, ep;
  cout << "Enter the range [sp,ep]: ";
  cin >> sp >> ep;
  // sp >= ep
  if (sp >= ep) {
    cout << "Invalid Range! \n";
    return -1;
  }
  cout << "Range: [" << sp << "," << ep << "] \n";

  vector<long long> possibleArmstrongNumbers = {};
  for (int i = sp; i <= ep; i++) {
    if (checkArmstrongNumber(i)) {
      possibleArmstrongNumbers.push_back(i);
    }
  }
  cout << "Armstrong Numbers in the Range: [ ";
  for (long long x: possibleArmstrongNumbers) {
    cout << x << " ";
  }
  cout << "] \n";
  return 0;
}