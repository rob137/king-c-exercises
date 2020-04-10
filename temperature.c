#include <stdio.h>

#define SCALE_FACTOR 5.0f / 9.0f

int main(void) {
  double f, c;

  printf("Fahrenheit to convert: ");
  scanf("%lf", &f);

  c = (f - 32) * SCALE_FACTOR;
  printf("Celsius: %.1f\n", c);

  return 0;
}
