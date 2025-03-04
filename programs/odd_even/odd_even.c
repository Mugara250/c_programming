#include <stdio.h>

void main() {
    int number;

    printf("Program to check if a number is odd or even.\n");
    printf("Enter any number: ");
    scanf("%d", &number);

    if ( number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d an is odd number.\n", number);
    }
}