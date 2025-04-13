// A program that helps differentiate the break and continue keywords

#include <stdio.h>

int main() {
  for (int i = 0; i < 5; i++) {
    if (i == 3) {
      continue;
    } else if (i == 4) {
      break;
    } else {
      printf("%d\n", i);
    }
  }
}
