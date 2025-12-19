#include <stdio.h>

int main() {
    int number;
    printf("Enter the Number whose factorial you want to calculate: ");
    scanf("%d" , &number);
    long long fact = 1;
    for (int i = 1; i <= number; i++) {
        fact *= i;
    }
    printf("Factorial of %d is = %lld", number, fact);
    return 0;
}