#include <stdio.h>

int main()
{
    int number = 8;

    for (int i = 0; i < number; i++) 
    {
        for (int j = 0; j < number - i; j++) 
        {
            printf("%d", number - j);
        }
        printf("\n");
    }
    return 0;
}