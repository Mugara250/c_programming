#include <stdio.h>

double sum(double x, double y, double z)
{
    return x + y + z;
}

int main()
{
    double result = sum(2, 7, 5);
    printf("%f\n", result);
    return 0;
}