#include <stdio.h>

int Motors;
int weight;

int main(void) {
  printf("How many motors are carrying the package?: ");
  scanf("%d", &Motors);
  printf("how many kg of packages do we expect?:");
  scanf("%d", &weight);

  if (5.6 < (float)weight / (float)Motors)
    printf("sorry the weight is too large");
  else
    printf("This will work!");
}