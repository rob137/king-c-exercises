#include <stdio.h>

int main(void) {
  int n;
  double e = 1.0f;

  printf("Enter an integer: ");
  scanf("%d", &n);

  for (; n > 0; n--) {
    double factorial = 1.0f;
    for (int i = 1; i <= n; i++) {
      factorial *= i;
    }
    e += 1 / factorial;
  }

  printf("%lf\n", e);

  return 0;
}
