#include <stdio.h>

int main() {
  float basic, da, hra, gross;

  printf("Enter basic salary: ");
  scanf("%f", &basic);

  da = 0.40 * basic;
  hra = 0.20 * basic;
  gross = basic + da + hra;

  printf("\n\n");
  printf("Basic Salary: %2f\n", basic);
  printf("Dearness Allowance: %f\n", da);
  printf("House-rent Allowance: %f\n", hra);
  printf("Gross Salary: %f\n", gross);

  return 0;
}
