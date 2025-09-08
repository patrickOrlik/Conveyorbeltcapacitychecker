#include <stdio.h>

int Motors;
float weight;

int main(void) {
  printf("How many motors are carrying the package?: ");
  if (scanf("%d", &Motors) != 1) {
    printf("Input is wrong please enter a digit!");
    return 0;
  }
  printf("how many kg of packages do we expect?:");
  if (scanf("%f", &weight) != 1) {
    printf("input is wrong please enter a numeric value!");
    return 0;
  }
  if (5.6 < weight / Motors)
    printf("sorry the weight is too large");
  else
    printf("This will work!");
}