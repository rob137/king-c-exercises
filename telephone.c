#include <stdio.h>

int main(void) {
  int bracket, first, second;

  printf("Enter phone number [(xxx)-xxx-xxxx]: ");
  scanf("(%d)-%d-%d", &bracket, &first, &second);

  printf("You entered %d.%d.%d\n", bracket, first, second);

  return 0;
}
