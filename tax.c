#include <stdio.h>

#define TAX 1.05

int main(void) {
  double beforeTax;
  printf("Enter dollars and cents amount (e.g. 2.55): ");
  scanf("%lf", &beforeTax);

  printf("The cost after tax is %.2lf\n", beforeTax * TAX);

  return 0;
}
