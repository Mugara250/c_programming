#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Hello World!";

    printf("%lu\n", strlen(string));
    printf("%lu\n", sizeof string);

    return 0;
}