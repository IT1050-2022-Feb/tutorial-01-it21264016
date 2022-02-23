/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/
#include <stdio.h>
#define normalRate 50
#define extraRate 40

int main() {
  float distance;
  float finalFare = 0;
  printf("Enter distance: ");
  scanf("%f", &distance);
  if (distance <= 30 && distance > 0) {
    finalFare = distance * normalRate;
  } else if (distance > 30) {
    finalFare = (normalRate * 30) + ((distance - 30) * extraRate); 
  }

  printf("Your fare is: %.2f", finalFare);
  return 0;
}

