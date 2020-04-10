#include <stdio.h>

int main(void) {
  int height, width, depth, volume;

  printf("Enter height of cuboid baby: ");
  scanf("%d", &height);
  printf("Enter width of cuboid baby: ");
  scanf("%d", &width);
  printf("Enter depth of cuboid baby: ");
  scanf("%d", &depth);
  volume = height * width * depth;

  printf("\nVolume (cubic inches): %d\n", volume);
  return 0;
}
