#include <stdio.h>

int main(void) {
  // "You may assume that the number has no more than 4 digits"
  int input, digits;

  printf("Enter a number: ");
  scanf("%d", &input);

  printf("The number %d has ", input);

  if (input < 10) {
    digits = 1;
  } else if (input < 100) {
    digits = 2;
  } else if (input < 1000) {
    digits = 3;
  } else {
    digits = 4;
  }

  printf("%d digit", digits);

  if (digits > 1) {
    printf("s\n");
  } else {
    printf("\n");
  }

  return 0;
}
