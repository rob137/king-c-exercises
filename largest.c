#include <stdio.h>

int main(void) {
  int i1, i2, i3, i4, smallest, largest;

  printf("Enter four integers separated by spaces (e.g. 55 201 2 20): ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  smallest = i1;
  smallest = smallest < i2 ? smallest : i2;
  smallest = smallest < i3 ? smallest : i3;
  smallest = smallest < i4 ? smallest : i4;

  largest = i1;
  largest = largest > i2 ? largest : i2;
  largest = largest > i3 ? largest : i3;
  largest = largest > i4 ? largest : i4;

  printf("Smallest: %d\n", smallest);
  printf("Largest: %d\n", largest);

  return 0;
}
