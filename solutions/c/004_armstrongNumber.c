#include <stdio.h>
#include <math.h>

int main() {
    long long number;
    printf("Enter the Number: ");
    scanf("%d",&number);

    long long temp = number;

    // Calculate the Number of digits:
    int numberOfDigits = 0;
    while (temp > 0) {
        numberOfDigits++;
        temp = temp / 10;
    }
    temp = number;
    long long total = 0;
    // actual armstrong checking
    while (temp > 0) {
        int digit = temp % 10;
        total = total + pow(digit , numberOfDigits);
        temp = temp / 10;
    }

    if (total == number) {
        printf("%d is an ARMSTRONG Number!" , number);
    } else {
        printf("%d is NOT an ARMSTRONG Number!" , number);
    }
    return 0;
}