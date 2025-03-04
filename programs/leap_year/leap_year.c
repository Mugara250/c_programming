#include <stdio.h>

void main() {
    int year;

    printf("A program that checks whether a year is a leap year or not.\n");
    printf("Enter any year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 == 0 && year % 400 == 0)) {
        printf("The year %d is a leap year!\n", year);
    } else {
        printf("The year %d is not a leap year!\n", year);
    }
}