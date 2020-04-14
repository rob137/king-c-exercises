#include <stdio.h>

int main(void) {
  int numGrade, gradeTens;

  printf("Enter numerical grade: ");
  scanf("%d", &numGrade);

  gradeTens = (numGrade / 10) * 10;

  printf("Letter grade: ");
  switch (gradeTens) {
    case 100:
      printf("A");
      break;
    case 90:
      printf("A");
      break;
    case 80:
      printf("B");
      break;
    case 70:
      printf("C");
      break;
    case 60:
      printf("D");
      break;
    default:
      printf("F");
      break;
  }
  printf("\n");

  return 0;
}
