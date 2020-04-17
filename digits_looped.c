#include <stdio.h>

int main(void) {
  int input;

  printf("Enter an integer: ");
  scanf("%d", &input);

  printf("The reversal is: ");
  do {
    int first = input % 10;
    printf("%i", first);
    input = input / 10;
  } while (input >= 10);
  printf("%i\n", input);

  return 0;
}
