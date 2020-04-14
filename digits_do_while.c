#include <stdio.h>

int main(void) {
  int input, digits = 0;

  printf("Enter a nonnegative integer: ");
  scanf("%d", &input);

  do {
    input /= 10;
    digits++;
  } while (input > 0);

  printf("The number has %d digit(s).\n", digits);

  return 0;
}
