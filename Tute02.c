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

int main() {
  int d; // getting inputs for distance
  int amount; 

  printf("\nEnter the distance : ");
  scanf("%d", &d);

  if (d>20){
    amount = 30*50 + (d-30)*40;
  }
  else{
    amount = d*50;
  }

  printf("\nYou have travelled %d kilometers", d);
  printf("\n\nYour bill is %d Rupees\n\n", amount);

  printf("Thankyou !");
  return 0;
}
