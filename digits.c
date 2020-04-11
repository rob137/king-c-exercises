#include <stdio.h>

int main(void) {
  int input, first, last;

  printf("Enter a two-digit number: ");
  scanf("%d", &input);

  first = input % 10;
  last = input / 10;

  printf("The reversal is: %i%i\n", first, last);

  return 0;
}
