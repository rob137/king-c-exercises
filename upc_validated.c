#include <stdio.h>

int main(void) {
  int f, m1, m2, m3, m4, m5, p1, p2, p3, p4, p5, c;
  long total;

  printf("Enter the first digit: ");
  scanf("%d", &f);
  printf("Enter the manufactorer code: ");
  scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
  printf("Enter the product code: ");
  scanf("%d %d %d %d %d", &p1, &p2, &p3, &p4, &p5);

  c = 9 -
      (((f + m2 + m4 + p1 + p3 + p5) * 3 + (m1 + m3 + m5 + p2 + p4)) - 1) % 10;

  total = 10000000000 * f + 1000000000 * m1 + 100000000 * m2 + 10000000 * m3 +
          1000000 * m4 + 100000 * m5 + 10000 * p1 + 1000 * p2 + 100 * p3 +
          10 * p4 + p5;
  if (total < 100000000000) {
    printf("VALID\n");
  } else {
    printf("INVALID\n");
  }

  printf("Check number: %i\n", c);

  return 0;
}
