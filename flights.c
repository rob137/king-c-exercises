#include <stdio.h>

int main(void) {
  int inputHour, inputMins, inputTotal, dHour, dMins, aHour, aMins, dMinsTens,
      dMinsOnes, aMinsTens, aMinsOnes, time1, time2, time3, time4, time5, time6,
      time7, time8;

  printf("Enter a 24-hour time using the format \"HH:MM\": ");
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
    aHour = 23;
    aMins = 58;
  } else if (inputTotal < time1 + (time2 - time1) / 2) {
    dHour = 8;
    dMins = 0;
    aHour = 10;
    aMins = 16;
  } else if (inputTotal < time2 + (time3 - time2) / 2) {
    dHour = 9;
    dMins = 43;
    aHour = 11;
    aMins = 52;
  } else if (inputTotal < time3 + (time4 - time3) / 2) {
    dHour = 11;
    dMins = 19;
    aHour = 13;
    aMins = 31;
  } else if (inputTotal < time4 + (time5 - time4) / 2) {
    dHour = 12;
    dMins = 47;
    aHour = 15;
    aMins = 0;
  } else if (inputTotal < time5 + (time6 - time5) / 2) {
    dHour = 14;
    dMins = 0;
    aHour = 16;
    aMins = 8;
  } else if (inputTotal < time6 + (time7 - time6) / 2) {
    dHour = 15;
    dMins = 45;
    aHour = 17;
    aMins = 55;
  } else if (inputTotal < time7 + (time8 - time7) / 2) {
    dHour = 19;
    dMins = 0;
    aHour = 21;
    aMins = 20;
  } else {
    dHour = 21;
    dMins = 45;
    aHour = 23;
    aMins = 58;
  }

  dMinsTens = dMins / 10;
  dMinsOnes = dMins - dMinsTens * 10;

  aMinsTens = aMins / 10;
  aMinsOnes = aMins - aMinsTens * 10;

  printf("Closest departure time is %d:%d%d ", dHour, dMinsTens, dMinsOnes);
  printf("%s.m., ", dHour < 12 ? "a" : "p");
  printf("arriving at %d:%d%d ", aHour, aMinsTens, aMinsOnes);
  printf("%s.m.\n", aHour < 12 ? "a" : "p");

  return 0;
}
