#include <stdio.h>

int main(void) {
  int num, count = 1;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &num);

  while (count <= num) {
    printf("\t%d\t%d\n", count, count * count);
    count++;
  }

  return 0;
}
