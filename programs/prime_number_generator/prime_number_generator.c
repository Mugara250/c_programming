#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    int number;
    int prime_count = 0;

    printf("Enter any number: ");
    scanf("%d", &number);

    for (int i = 1; i < number; i++)
    {
        bool isPrime = true;

        if (i == 1)
        {
            continue;
        }
        for (int j = sqrt(i); j > 1; j--)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            prime_count++;
        }
    }

    if (prime_count == 1)
    {
        printf("There are %d prime number between 1 and %d\n", prime_count, number);
    }
    else
    {
        printf("There are %d prime numbers between 1 and %d\n", prime_count, number);
    }
    return 0;
}