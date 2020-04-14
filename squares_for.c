#include <stdio.h>

int main(void) {
  int num;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    printf("\t%d\t%d\n", i, i * i);
  }

  return 0;
}
