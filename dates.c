#include <stdio.h>

int main(void) {
  int m1, d1, y1, y1Tens, y1Ones, m2, d2, y2, y2Tens, y2Ones, earliest;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  y1Tens = y1 / 10;
  y1Ones = y1 - y1Tens * 10;
  y2Tens = y2 / 10;
  y2Ones = y2 - y2Tens * 10;

  if (y1 != y2) {
    earliest = y1 < y2 ? 1 : 2;
  } else if (m1 != m2) {
    earliest = m1 < m2 ? 1 : 2;
  } else if (d1 != d2) {
    earliest = d1 < d2 ? 1 : 2;
  } else {
    earliest = 0;
  }

  printf("%d/%d/%d%d is", m1, d1, y1Tens, y1Ones);
  if (earliest == 1) {
    printf(" earlier than ");
  } else if (earliest == 2) {
    printf(" later than ");
  } else {
    printf(" the same as ");
  }
  printf("%d/%d/%d%d.\n", m2, d2, y2Tens, y2Ones);

  return 0;
}
