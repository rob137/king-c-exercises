#include <stdio.h>

int main(void) {
  int item, day, month, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  printf("\nItem\tUnit\tPrice\n\tPrice\tDate\n");
  printf("%d\t$%6.2f\t", item, price);
  printf("%d/%d/%d\n", day, month, year);

  return 0;
}
