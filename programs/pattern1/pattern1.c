#include <stdio.h>

// Create a function that will handle logic of building the pattern
void pattern(int number) {
    for (int i = 0; i < number; i++) {
        // inner loop to print the line
        for (int j = 0; j < number - i; j++) {
            printf("%d ", number - j);
        }
        printf("\n");
    }
}

int main() {
    // variable to store the number
    int num;

    printf("A program that will print a certain decreasing pattern based on the given input number\n");

    // getting the number from the user and reading it into memory
    printf("Enter any number: ");
    scanf("%d", &num);

    // passing the input number to the pattern function call
    pattern(num);
    return 0;
}