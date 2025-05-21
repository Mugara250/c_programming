#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number1;
    int number2;
    char operator;
    bool flag1 = true;
    char flag2;

    printf("SIMPLE CALCULATOR\n");

    while (flag1)
    {
        printf("Enter the first number: ");
        scanf("%d", &number1);
        
        printf("Enter the second number: ");
        scanf("%d", &number2);

        printf("Enter the operator (valid operators are +, -, *, /, and %%): ");
        scanf(" %c", &operator);

        switch(operator) 
        {
            case '+':
            printf("%d + %d = %d\n", number1, number2, number1 + number2);
            break;

            case '-':
            printf("%d - %d = %d\n", number1, number2, number1 - number2);
            break;

            case '*':
            printf("%d * %d = %d\n", number1, number2, number1 * number2);
            break;

            case '/':
            printf("%d / %d = %d\n", number1, number2, number1 / number2);
            break;

            case '%':
            printf("%d %% %d = %d\n", number1, number2, number1 % number2);
            break;
        }

        printf("Do you wish to continue (y/n): ");
        scanf(" %c", &flag2);

        if (flag2 == 'n')
        {
            flag1 = false;
            // break;
        }
    }

    printf("\nPOWERING OFF\n");
    return 0;
}