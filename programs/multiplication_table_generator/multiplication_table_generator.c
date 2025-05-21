#include <stdio.h>

int main() {
    int number;
    
    printf("MULTIPLICATION TABLE GENERATOR\n");

    printf("\nEnter any number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("\nMultiplication table for %d\n\n", i);
        for (int j = 1; j <= 12; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

    printf("\nEND OF MULTIPLICATION TABLES\n");
    
    return 0;
}