#include <stdio.h>

int main(void) {
  int inputHour, inputMins, inputTotal, dHour, dMins, aHour, aMins, time1,
      time2, time3, time4, time5, time6, time7, time8;
  char amPm;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &inputHour, &inputMins);

  inputTotal = inputHour * 60 + inputMins;
  // Departure times are: 0800, 0943, 1119, 1247, 1400, 1545, 1900, 2145
  time1 = 8 * 60;
  time2 = 9 * 60 + 43;
  time3 = 11 * 60 + 19;
  time4 = 12 * 60 + 47;
  time5 = 14 * 60;
  time6 = 15 * 60 + 45;
  time7 = 19 * 60;
  time8 = 21 * 60 + 45;

  if (inputTotal <= 252) {
    dHour = 21;
    dMins = 45;
  } else if (inputTotal < time1 + (time2 - time1) / 2) {
    dHour = 8;
    dMins = 0;
  } else if (inputTotal < time2 + (time3 - time2) / 2) {
    dHour = 9;
    dMins = 43;
  } else if (inputTotal < time3 + (time4 - time3) / 2) {
    dHour = 11;
    dMins = 19;
  } else if (inputTotal < time4 + (time5 - time4) / 2) {
    dHour = 12;
    dMins = 47;
  } else if (inputTotal < time5 + (time6 - time5) / 2) {
    dHour = 14;
    dMins = 0;
  } else if (inputTotal < time6 + (time7 - time6) / 2) {
    dHour = 15;
    dMins = 45;
  } else if (inputTotal < time7 + (time8 - time7) / 2) {
    dHour = 19;
    dMins = 0;
  } else {
    dHour = 21;
    dMins = 45;
  }

  printf("Closest departure time is %d:%d ", dHour, dMins);
  printf("%c.m., ", amPm);
  printf("arriving at %d:%d ", aHour, aMins);
  printf("%c.m.\n", aHour < 12 ? "p" : "a");

  return 0;
}
