// 1. Display the operations to the user to choose
// 2. Ask for the user to input the operands and operator
// 3. Both above steps will be encapsulated in the do...while loop
// 4. Create a flag to abort the calculation

#include <stdio.h>

int main() {
    printf("Welcome to the Menu-driven application!\n");

    int num1, num2;
    char operator;
    
    // initialize quit to 'q'
    int quit = 0;
    do {
        printf("\nUse any operator from the following (+, -, /, *, %)\n");
        printf("Enter 'q' to quit\n");
        // operator input
        printf("Enter the operator: \n");
        scanf(" %c", &operator);
        
        // quit
        if (operator == 'q') {
            quit = 1;
            break;
        }

        // number input
        printf("Enter the first number: \n");
        scanf("%d", &num1);

        printf("Enter the first number: \n");
        scanf("%d", &num2);

        // operation
        switch (operator) {
            case '+':
            printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
            break;

            case '-':
            printf("\nThe difference of %d and %d is %d\n", num1, num2, num1 + num2);
            break;

            case '*':
            printf("\nThe product of %d and %d is %d\n", num1, num2, num1 + num2);
            break;

            case '/':
            printf("\nThe quotient of %d and %d is %d\n", num1, num2, num1 + num2);
            break;

            case '%':
            printf("\ngit The modulus of %d and %d is %d\n", num1, num2, num1 + num2);
            break;
        }

    } while (1);

    printf("Thank you for using the calculator!\n");
    return 0;
}