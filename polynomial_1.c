#include <stdio.h>

int main(void) {
  double x, result;
  printf("This program finds the result of the following ");
  printf("polynomial for a given value:\n");
  printf("((((3x + 2)x - 5)x - 1)x + 7)x\n\n");

  printf("Enter a value for x: ");
  scanf("%lf", &x);

  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x;
  printf("%.2lf\n", result);

  return 0;
}
