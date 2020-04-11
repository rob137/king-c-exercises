#include <stdio.h>

int main(void) {
  int first, middle, last;

  printf("Enter a three-digit number with digits eperated by a space ");
  printf("(e.g. \"1 2 3\"): ");
  scanf("%d%d%d", &last, &middle, &first);

  printf("Reverse: %i%i%i\n", first, middle, last);

  return 0;
}
