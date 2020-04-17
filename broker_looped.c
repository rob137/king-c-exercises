#include <stdio.h>

int main(void) {
  float trade, commission;

  printf("Enter value of trade: ");
  scanf("%f", &trade);

  while (trade != 0) {
    if (trade < 2500) {
      commission = trade * 0.017f + 30.0f;
    } else if (trade <= 6250) {
      commission = trade * 0.066f + 56.0f;
    } else if (trade <= 20000) {
      commission = trade * 0.034f + 76.0f;
    } else if (trade <= 50000) {
      commission = trade * 0.022f + 100.0f;
    } else if (trade <= 500000) {
      commission = trade * 0.011f + 155.0f;
    } else {
      commission = trade * 0.009f + 255.0f;
    }

    if (trade <= 39) {
      commission = 39.00f;
    }

    printf("Commission: %.2f\n\n", commission);

    printf("Enter value of trade: ");
    scanf("%f", &trade);
  }
  return 0;
}
