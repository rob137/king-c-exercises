#include <stdio.h>

int main(void) {
  int input;
  printf("Enter an integer: ");
  scanf("%d", &input);

  for (int i = 2; i * i <= input; i += 2) {
    int square = i * i;
    printf("%d\n", square);
  }

  return 0;
}
