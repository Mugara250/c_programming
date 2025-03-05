#include <stdio.h>

void pattern(int number) {
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", number - j);
        }
        printf("\n");
    }
}

int main() {
    int num;

    printf("A program that prints an increasing pattern based on the input number.\n");
    printf("Enter any number: ");
    scanf("%d", &num);

    pattern(num);
    return 0;
}
