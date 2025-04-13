/* A program that differentiates between the if-else statement and the
switch case statement */

#include <ctype.h>
#include <stdio.h>

int main() {
  char vowel;
  int num;

  // if-else
  printf("Enter any number: ");
  scanf("%d", &num);
  if (num > 0) {
    printf("Positive\n");
  } else {
    printf("Negative\n");
  }

  // switch case
  printf("Enter any vowel and will get a colour corresponding to it: ");
  scanf(" %c", &vowel);
  vowel = tolower(vowel);
  switch (vowel) {
  case 'a':
    printf("Azure\n");
    break;
  case 'i':
    printf("Indigo");
    break;
  case 'o':
    printf("Orange\n");
    break;
  case 'e':
    printf("Ebony\n");
    break;
  case 'u':
    printf("Umber\n");
    break;
  default:
    printf("Invalid vowel\n");
  }
  return 0;
}
