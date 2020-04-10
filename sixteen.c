#include <stdio.h>

int main(void) {
  int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth,
      eleventh, twelfth, thirteenth, fourteenth, fifteenth, sixteenth,
      bottomRight, bottomLeft, firstCol, secondCol, thirdCol, fourthCol,
      firstRow, secondRow, thirdRow, fourthRow;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &first, &second,
        &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth,
        &eleventh, &twelfth, &thirteenth, &fourteenth, &fifteenth, &sixteenth);

  bottomRight = first + sixth + eleventh + sixteenth;
  bottomLeft = fourth + seventh + tenth + thirteenth;
  firstCol = first + fifth + ninth + thirteenth;
  secondCol = second + sixth + tenth + fourteenth;
  thirdCol = third + seventh + eleventh + fifteenth;
  fourthCol = fourth + eighth + twelfth + sixteenth;
  firstRow = first + second + third + fourth;
  secondRow = fifth + sixth + seventh + eighth;
  thirdRow = ninth + tenth + eleventh + twelfth;
  fourthRow = thirteenth + fourteenth + fifteenth + sixteenth;

  printf("%2d %2d %2d %2d\n", first, second, third, fourth);
  printf("%2d %2d %2d %2d\n", fifth, sixth, seventh, eighth);
  printf("%2d %2d %2d %2d\n", ninth, tenth, eleventh, twelfth);
  printf("%2d %2d %2d %2d\n", thirteenth, fourteenth, fifteenth, sixteenth);

  printf("Row sums: %d %d %d %d\n", firstRow, secondRow, thirdRow, fourthRow);
  printf("Column sums: %d %d %d %d\n", firstCol, secondCol, thirdCol,
         fourthCol);
  printf("Diagonal sums: %d %d\n", bottomLeft, bottomRight);

  return 0;
}
