/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2;
  printf("Enter mark 1: ");
  scanf("%d", &mark1);
  printf("Enter mark 2: ");
  scanf("%d", &mark2);
  float avg = (float)(mark1 + mark2)/2;
  printf("Average is %.2f", avg);
  // test comment
  return 0;
}

