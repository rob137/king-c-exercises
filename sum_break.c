#include <stdio.h>

int main(void) {
  int num, total = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  for (;;) {
    scanf("%d", &num);
    total += num;
    if (num == 0) {
      break;
    }
  }

  printf("The sum is: %d\n", total);

  return 0;
}
