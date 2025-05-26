#include <stdio.h>

int main() {
    int marks;

    printf("DETERMINING GRADES BASED ON MARKS\n");

    printf("Enter a number: ");
    scanf("%d", &marks);

    marks > 80 ? printf("Grade A\n") : printf("Other grades\n");
    return 0;
}