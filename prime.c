#include <stdio.h>

int main(void) {
  int input, i;

  printf("This program tells you whether a number is prime.\n");
  printf("Enter a number: ");
  scanf("%d", &input);

  for (i = 2; i < input; i++) {
    if (input % i == 0) {
      break;
    }
  }

  printf("%d ", input);
  if (i == input) {
    printf("is");
  } else {
    printf("is not");
  }
  printf(" a prime number.\n");

  return 0;
}
