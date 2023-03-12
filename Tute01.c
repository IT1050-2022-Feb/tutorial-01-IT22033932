/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float no1, no2;
  float avg;

  printf("Enter the first number : ");
  scanf("%f", &no1);
  
  printf("Enter the second number : ");
  scanf("%f", &no2);

  avg = (no1+no2)/2.0;

    printf("Avg of two numbers : %.2f\n", avg);
  
  
  return 0;
}

