/****************************************************
 Conversion of distance (in km) between two cities
 to m, cm, ft and inches
 ****************************************************/

#include <stdio.h>

int main() {
  float dist_in_km,
        dist_in_m,
        dist_in_cm,
        dist_in_ft,
        dist_in_inches;

  printf("Enter distance between two citites in km: ");
  scanf("%f", &dist_in_km);

  dist_in_m = dist_in_km * 1000;
  dist_in_cm = dist_in_m * 100;
  dist_in_inches = dist_in_cm / 2.54;
  dist_in_ft = dist_in_inches / 12;

  printf("Distance in meters: %f\n", dist_in_m);
  printf("Distance in cm: %f\n", dist_in_cm);
  printf("Distance in feet: %f\n", dist_in_ft);
  printf("Distance in inches: %f\n", dist_in_inches);

  return 0;
}
