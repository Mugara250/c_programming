/* A program to differentiate between while and do while */

#include <stdio.h>

int main() {
  // while loop
  int num = 1;
  int number = 1;
  while (num < 5) {
    printf("num = %d\n", num);
    num++;
  }

  // do while loop
  do {
    printf("number = %d\n", number);
    number++;
  } while (number < 10);

  return 0;
}
