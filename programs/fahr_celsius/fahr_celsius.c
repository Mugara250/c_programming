#include <stdio.h>
#define LOWER 0 /* lower limit of the table */
#define UPPER 300 /* upper limit of the table */
#define STEP 20 /* step size */

/* Fahrenheit - Celsius conversion table */


int main() {
  printf("Fahrenheit - Celsius conversion table\n\n");

  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
  {
    printf("%3d  %6.1f\n", fahr, (5.0 / 9.0) *(fahr - 32));
  }
  
}
