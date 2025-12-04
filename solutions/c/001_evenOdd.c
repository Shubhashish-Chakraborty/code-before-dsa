#include <stdio.h>

int main() {
    int number;
    printf("Enter the Number: ");
    scanf("%d" , &number);

    if (number % 2 == 0) {
        printf("%d is an Even Number!" , number);
    } else {
        printf("%d is an ODD Number" , number);
    }
    return 0;
}