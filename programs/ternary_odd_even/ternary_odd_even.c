#include <stdio.h>

int main() {
    int number;

    printf("DETERMINING WHETHER THE NUMBER IS EVEN OR ODD USING A TERNARY OPERATOR\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    number % 2 == 0 ? printf("Even\n") : printf("Odd\n");
    return 0;
}