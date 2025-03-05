#include <stdio.h>
#include <string.h>

void increasing_pattern(int number) {
    char character = '*';

    for (int i = 0; i < number; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%c ", character);
        }
        printf("\n");
    }
}

void decreasing_pattern(int number) {
    char character = '*';

    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number - i; j++) {
            printf("%c ", character);
        }
        printf("\n");
    }
}

int main() {
    int num;
    char pattern[20];

    printf("A program that prints a certain star pattern based on the input number and\n whether the user wants a decreasing or increasing pattern.\n");

    // number input
    printf("Enter any number: ");
    scanf("%d", &num);

    // pattern input
    printf("Do you want a decreasing or increasing pattern (write 'increasing' or 'decreasing'): ");
    scanf("%19s", pattern);

    if (strcmp(pattern, "increasing") == 0) {
        increasing_pattern(num);
    } else {
        decreasing_pattern(num);
    }
    
    return 0;
}