#include <stdio.h>

int main(void) {
  double loan, rate, payment, monthlyRate;

  printf("Enter amount of loan: ");
  scanf("%lf", &loan);
  loan = 20000.0f;

  printf("Enter interest rate: ");
  scanf("%lf", &rate);
  rate = 6.0f;
  monthlyRate = 1 + rate / 1200;

  printf("Enter monthly payment: ");
  scanf("%lf", &payment);
  payment = 386.66f;

  loan = (monthlyRate * loan) - payment;
  printf("Balance remaining after first payment: %.2lf\n", loan);
  loan = (monthlyRate * loan) - payment;
  printf("Balance remaining after second payment: %.2lf\n", loan);
  loan = (monthlyRate * loan) - payment;
  printf("Balance remaining after thrid payment: %.2lf\n", loan);
}
