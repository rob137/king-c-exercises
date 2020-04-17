#include <stdio.h>

int main(void) {
  int days, starting, currentDay = 1;
  ;

  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &starting);

  for (int i = 0; i < starting + days; i++) {
    if (i < starting) {
      printf("   ");
    } else {
      printf("%2d ", currentDay);
      currentDay++;
    }
    if (i % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}
