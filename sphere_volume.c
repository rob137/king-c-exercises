#include <stdio.h>

#define FORMULA 4.0f / 3.0f * 3.14159265359

int main(void) {
  double radius;
  printf("Write the radius of your sphere: ");
  scanf("%lf", &radius);

  printf("Your sphere has a volume of %lf\n",
         FORMULA * radius * radius * radius);
  return 0;
}
