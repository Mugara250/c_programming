#include <stdio.h>
#include <stdbool.h>

int main()
{
    int operand1;
    int operand2;
    char operator;
    int result;
    bool flag1 = true;
    char flag2;


    while (flag1)
    {
        printf("Enter the first number: ");
        scanf("%d", &operand1);
        
        printf("Enter the second number: ");
        scanf("%d", &operand2);

        printf("Enter the operator (valid operators are +, -, *, /, and %%): ");
        scanf(" %c", &operator);

        switch(operator) 
        {
            case '+':
            result = operand1 + operand2;
            printf("%d\n", result);
            break;

            case '-':
            result = operand1 - operand2;
            printf("%d\n", result);
            break;

            case '*':
            result = operand1 * operand2;
            printf("%d\n", result);
            break;

            case '/':
            result = operand1 / operand2;
            printf("%d\n", result);
            break;

            case '%':
            result = operand1 % operand2;
            printf("%d\n", result);
            break;
        }

        printf("Do you wish to continue (y/n): ");
        scanf(" %c", &flag2);

        if (flag2 == 'n')
        {
            flag1 = false;
        }
    }

    return 0;
}