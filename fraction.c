#include <stdio.h>

int main(void) {
  int nom, denom, gcd, a, b;
  printf("Enter a fraction: ");
  scanf("%d/%d", &nom, &denom);

  a = nom;
  b = denom;

  while (b != 0) {
    int remainder = a % b;
    a = b;
    b = remainder;
  }

  gcd = a;

  printf("In lowest terms: %d/%d\n", nom / gcd, denom / gcd);

  return 0;
}
