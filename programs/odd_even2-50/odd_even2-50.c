/* A program that displays even numbers between 2 and 50 */

#include <stdio.h>

int main() {
  for (int i = 2; i <= 50; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
