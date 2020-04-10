#include <stdio.h>

int main(void) {
  int dollars, twenties, tens, fives;
  printf("Enter the amount of dollars: ");
  scanf("%i", &dollars);

  twenties = dollars / 20;
  printf("$20 bills: %i\n", twenties);

  dollars = dollars - twenties * 20;
  tens = dollars / 10;
  printf("$10 bills: %i\n", tens);

  dollars = dollars - tens * 10;
  fives = dollars / 5;
  printf("$5 bills: %i\n", fives);

  dollars = dollars - fives * 5;
  printf("$1 bills: %i\n", dollars);

  return 0;
}
