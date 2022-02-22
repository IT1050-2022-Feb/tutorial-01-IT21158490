/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  printf("\n");
  int i; // counter
  int mark;
  int total=0;
  float average ;

  for (i=1; i<=2; i++)
  {
    printf("Enter Subject %d : " ,i);
    scanf("%d", &mark);

    total = total + mark;     
  }

  average = total/(i-1);

  printf("\nTotal mark is : %d \n", total);
  printf("Average is : %f", average);
  
  return 0;
}

