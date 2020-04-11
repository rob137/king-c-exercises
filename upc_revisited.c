#include <stdio.h>

int main(void) {
  int input, f, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5, c;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%d", &input);

  p5 = input % 10;
  p4 = (input % 1000 - p5) / 10;
  p3 = (input % 1000 - p4) / 100;
  p2 = (input % 10000 - p4) / 1000;
  p1 = (input % 100000 - p4) / 10000;
  m5 = (input % 1000000 - p5) / 100000;
  m4 = (input % 10000000 - m5) / 1000000;
  m3 = (input % 100000000 - m4) / 10000000;
  m2 = (input % 1000000000 - m3) / 100000000;
  m1 = (input % 10000000000 - m2) / 1000000000;
  f = input / 10000000000;

  c = 9 -
      (((f + m2 + m4 + p1 + p3 + p5) * 3 + (m1 + m3 + m5 + p2 + p4)) - 1) % 10;

  printf("Check number: %i\n", c);

  return 0;
}
