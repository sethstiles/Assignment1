/**
Author: Seth Stiles
Date: September 7, 2018
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

double initialValue, finalValue, years, weeks, days, annualRateOfReturn, totalTime;

printf("What is the initial value of the object?\n");
scanf("%lf", &initialValue);

printf("What is the final value of the object?\n");
scanf("%lf", &finalValue);

printf("How many years has it been?\n");
scanf("%lf", &years);
/**if (years <= 0) {
  printf("Years, weeks, and days can't be negative! Try again!\n");
  exit(1);
}
*/
printf("How many weeks has it been?\n");
scanf("%lf", &weeks);
/**if (weeks <= 0) {
  printf("Years, weeks, and days can't be negative! Try again!\n");
  exit(1);
}
*/
printf("How many days has it been?\n");
scanf("%lf", &days);
/**if (days <= 0) {
  printf("Years, weeks, and days can't be negative! Try again!\n");
  exit(1);
}
*/

days = days / 365;
weeks = (weeks * 7) / 365;
totalTime = years + weeks + days;
if (totalTime <= 0) {
  printf("Make sure you have a positive amount of time!\n");
  exit(1);
}
annualRateOfReturn = (pow((finalValue / initialValue),(1/totalTime)) - 1);
annualRateOfReturn = annualRateOfReturn * 100;

printf("==========================\n");
printf("Initial value: $%.2lf\n", initialValue);
printf("Final value: $%.2lf\n", finalValue);
printf("Years: %.2lf\n", totalTime);
printf("Annual Rate of Return: %lf%\n", annualRateOfReturn);
printf("==========================\n");
return 0;
}
