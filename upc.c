#include <stdio.h>

int main(void) {
  int f, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5, c;

  printf("Enter the first digit: ");
  scanf("%d", &f);
  printf("Enter the manufactorer code: ");
  scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
  printf("Enter the product code: ");
  scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);

  c = 9 -
      (((f + m2 + m4 + p1 + p3 + p5) * 3 + (m1 + m3 + m5 + p2 + p4)) - 1) % 10;

  printf("Check number: %i\n", c);

  return 0;
}
