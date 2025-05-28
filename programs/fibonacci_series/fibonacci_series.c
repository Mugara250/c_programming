/*
This a program that displays the fibonacci series of  15
*/

#include <stdio.h>

int main() {
  int terms;

  printf("Enter the number of terms for the fibonacci series: ");
  scanf("%d", &terms);

  int num1 = 0;
  int num2 = 1;
  int num3 = num1 + num2;
  printf("%d\n%d\n%d\n", num1, num2, num3);

  for (int i = 1; i < terms - 2; i++) {
    num1 = num2;
    num2 = num3;
    num3 = num1 + num2;
    printf("%d\n", num3);
  }
  return 0;
}
