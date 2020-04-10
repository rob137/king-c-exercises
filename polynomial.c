#include <stdio.h>

int main(void) {
  double x, result;
  printf("This program finds the result of the following ");
  printf("polynomial for a given value:\n");
  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\n");

  printf("Enter a value for x: ");
  scanf("%lf", &x);

  result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x +
           7 * x - 6;
  printf("%.2lf\n", result);

  return 0;
}
