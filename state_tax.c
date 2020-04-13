#include <stdio.h>

int main(void) {
  float income, tax, over;

  printf("Enter your taxable income: ");
  scanf("%f", &income);

  if (income < 750) {
    tax = 0.01 * income;
  } else if (income < 2250) {
    over = income - 750;
    tax = 7.5 + 0.02 * over;
  } else if (income < 3750) {
    over = income - 2250;
    tax = 37.5 + 0.03 * over;
  } else if (income < 5250) {
    over = income - 3750;
    tax = 82.5 + 0.04 * over;
  } else if (income < 7000) {
    over = income - 5250;
    tax = 142.5 + 0.05 * over;
  } else {
    over = income - 7000;
    tax = 230 + 0.06 * over;
  }

  printf("Tax to pay: $%.2f\n", tax);

  return 0;
}
