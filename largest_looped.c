#include <stdio.h>

int main(void) {
  double input, largest = 0.0f;

  printf("Enter a number: ");
  scanf("%lf", &input);

  while (input > 0) {
    printf("Enter a number: ");
    scanf("%lf", &input);
    largest = input > largest ? input : largest;
  }

  printf("The largest number entered was %.2lf\n", largest);

  return 0;
}
