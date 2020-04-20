#include <stdio.h>

int main(void) {
  long input, sum = 0;
  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");
  scanf("%ld", &input);

  while (input != 0) {
    sum += input;
    scanf("%ld", &input);
  }

  printf("The sum is %ld.\n", sum);

  return 0;
}
