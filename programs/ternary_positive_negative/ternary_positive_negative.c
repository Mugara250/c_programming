#include <stdio.h>

int main()
{
    int number;

    printf("CATEGORIZING A NUMBER AS POSITIVE, NEGATIVE, OR ZERO\n");

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("%d is 0\n", number);
    } else {
        number > 0 ? printf("%d is positive\n", number) : printf("%d is negative\n", number);
    }
        return 0;
}