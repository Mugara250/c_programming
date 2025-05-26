#include <stdio.h>

int main() {
    int number1;
    int number2;

    printf("DETERMINING THE MAXIMUM OF TWO NUMBERS\n");

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    number1 > number2 ? printf("%d is greater than %d.\n", number1, number2) : printf("%d is greater than %d.\n", number2, number1);
    return 0;
}