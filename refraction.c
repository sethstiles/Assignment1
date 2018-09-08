/**
Author: Seth Stiles
September 9, 2018
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc, char **argv) {

// Refractive Indexes = N1 and N2, Angle of Incidences = Theta1 and Theta2,
double refractiveIndexOne, angleOfIncidenceOne, angleOfRefraction;

printf("What is the initial Angle of Incidence?\n");
scanf("%lf", &angleOfIncidenceOne);

if (angleOfIncidenceOne == 90) {
  printf("90 degrees is considered to be a 'critical angle!' Critical angles mean all light will be reflected! Please retry and enter a new Angle of Incidence.\n");
}else if (angleOfIncidenceOne >= 180 || angleOfIncidenceOne <= 0) {
  printf("Please enter a valid angle! \n");
  exit(-1);
}

printf("What is the angle of refraction?\n");
scanf("%lf", &refractiveIndexOne);
if(refractiveIndexOne < 1) {
  printf("Your index of refraction has to be greater than or equal to 1!");
  exit(1);
}

angleOfIncidenceOne = angleOfIncidenceOne * (M_PI / 180);

angleOfRefraction = (1 * sin(angleOfIncidenceOne) / refractiveIndexOne);
angleOfRefraction = asin(angleOfRefraction);

angleOfRefraction = angleOfRefraction * (180 / M_PI);
angleOfIncidenceOne = angleOfIncidenceOne * (180 / M_PI);
printf("================================\n");
printf("Angle of incidence: %lf degrees\n", angleOfIncidenceOne);
printf("Index of refraction: %.3lf \n", refractiveIndexOne);
printf("Angle of refraction: %.2lf degrees\n", angleOfRefraction);
printf("================================\n");
return 0;
}
