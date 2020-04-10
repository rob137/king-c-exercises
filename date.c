#include <stdio.h>

int main(void) {
  int day, month, year;
  printf("Enter day: ");
  scanf("%d", &day);

  printf("Enter month: ");
  scanf("%d", &month);

  printf("Enter year: ");
  scanf("%d", &year);

  printf("You entered the date: %d%d%d\n", year, month, day);
  return 0;
}
