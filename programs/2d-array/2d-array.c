// A program demonstrating how 2d arrays work

#include <stdio.h>

int main() {
  int x[3][3] = {{0, 1, 2}, {3, 4, 3}, {6, 7, 8}};

  printf("%d\n", x[0][2]);
  printf("%d\n", x[2][0]);
  printf("%d\n", x[2][2]);
}
