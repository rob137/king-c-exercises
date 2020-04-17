#include <stdio.h>

int main(void) {
  double loan, rate, payment, monthlyRate;
  int times;

  printf("Enter amount of loan: ");
  scanf("%lf", &loan);

  printf("Enter interest rate: ");
  scanf("%lf", &rate);
  monthlyRate = 1 + rate / 1200;

  printf("Enter monthly payment: ");
  scanf("%lf", &payment);

  printf("Enter times you will pay: ");
  scanf("%d", &times);

  for (int i = 0; i < times; i++) {
    loan = (monthlyRate * loan) - payment;
    printf("Balance remaining after payment %d: %.2lf\n", i, loan);
  }
}
