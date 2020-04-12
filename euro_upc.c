#include <stdio.h>

int main(void) {
  long input;
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, c;
  int odds, evens;

  printf("Enter the first 21 digits of an EAN: ");
  scanf("%ld", &input);

  d12 = input % 10;
  d11 = (input % 100 - d12) / 10;
  d10 = (input % 1000 - d11) / 100;
  d9 = (input % 10000 - d10) / 1000;
  d8 = (input % 100000 - d9) / 10000;
  d7 = (input % 1000000 - d8) / 100000;
  d6 = (input % 10000000 - d7) / 1000000;
  d5 = (input % 100000000 - d6) / 10000000;
  d4 = (input % 1000000000 - d5) / 100000000;
  d3 = (input % 10000000000 - d4) / 1000000000;
  d2 = (input % 100000000000 - d3) / 10000000000;
  d1 = input / 1000000000000;

  odds = d1 + d3 + d5 + d7 + d9 + d11;
  evens = d2 + d4 + d6 + d8 + d10 + d12;
  c = 9 - ((evens * 3 + odds) - 1) % 10;

  printf("Check number: %i\n", c);

  return 0;
}
