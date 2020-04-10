#include <stdio.h>

int main(void) {
  int a;
  float b;
  float c;

  a = 4;
  b = 9.9f;
  c = a * b * b;

  printf("Maths fact: when you multiply %d by %f twice, your get %f!!\n", a, b,
         c);
  return 0;
}
