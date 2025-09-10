#include <stdio.h>

int Motors;
float weight;
int input;
int main(void) {
  // asks for the amount of motors and also makes sure that you enter a
  // numerical value
  printf("How many motors are carrying the package?: ");
  if (scanf("%d", &Motors) != 1) {
    printf("Input is wrong please enter a digit!");
    return 0;
  }
  // asks for the amount of weight we expect and also makes sure you enter a
  // numerical value
  printf("how many kg of packages do we expect?:");
  if (scanf("%f", &weight) != 1) {
    printf("input is wrong please enter a numeric value!");
    return 0;
  }
  // calculates if the amount of weight i too large compared to the amount of
  // motors
  if (5.6 < weight / Motors)
    printf("sorry the weight is too large");

  else
    printf("This will work!");
}