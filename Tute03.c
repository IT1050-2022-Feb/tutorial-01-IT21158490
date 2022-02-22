/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int i;
  int n; // number to calculate untill
  int total=0;

  printf("\nLet's calculate sum from 1 to N ! ");

  printf("\n\nEnter a number to N to stop : ");
  scanf("%d", &n);

  for (i=1; i<(n+1); i++){
    total = total + i;
    
  }

  if (n>7){
    printf("\n\n1+2+3+...+%d,%d+%d = %d\n\n",n-2,n-1,n,total);
  }
  printf("Total = %d ", total);
  
  return 0;
}

