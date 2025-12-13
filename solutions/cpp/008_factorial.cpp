#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the Number whose factorial you wanna calculate: ";
    cin >> number;

    long long fact = 1;
    // // for loop:
    // for (int i = 1; i <= number; i++) {
    //     fact *= i;
    // }
    
    // while loop:
    int x = 1;
    while (x <= number) {
        fact *= x;
        x++;
    }

    cout << "The Factorial of " << number << " is = " << fact;
    return 0;
}