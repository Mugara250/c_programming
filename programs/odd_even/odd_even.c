#include <stdio.h>

void main() {
    int number;

    printf("Program to check if a number is odd or even.\n");
    printf("Enter any number: ");
    scanf("%d", &number);

    if ( number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
}