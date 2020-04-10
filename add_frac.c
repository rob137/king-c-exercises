#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, resultNum, resultDenom;
  printf("Enter two practions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  resultNum = num1 * denom2 + num2 * denom1;
  resultDenom = denom1 * denom2;

  printf("The sum is %d/%d\n", resultNum, resultDenom);
  return 0;
}
