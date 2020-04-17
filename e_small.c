#include <stdio.h>

int main(void) {
  double eps, e = 1.0f, currentTerm = 1.0f;
  int n = 1;

  printf("Enter a number between 0 and 1 (e.g. 0.2): ");
  scanf("%lf", &eps);

  while (currentTerm > eps) {
    double factorial = 1.0f;
    for (int i = 1; i <= n; i++) {
      factorial *= i;
    }
    currentTerm = 1 / factorial;
    e += currentTerm;
    n++;
  }

  printf("%lf\n", e);

  return 0;
}
