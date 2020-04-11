#include <stdio.h>

int main(void) {
  int input, first, middle, last;

  printf("Enter a three-digit number: ");
  scanf("%d", &input);

  first = input % 10;
  last = input / 100;
  middle = (input - last * 100 - first) / 10;

  printf("The reversal is: %i%i%i\n", first, middle, last);

  return 0;
}
