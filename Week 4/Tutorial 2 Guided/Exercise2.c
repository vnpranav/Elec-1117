#include <stdio.h>

void main(void){
   int count, i, sum, item;
   float avg;

   sum = 0;

   printf("Enter number of items to be averaged: ");
   scanf("%d", &count);
   for (i = 0; i < count; i++){
      printf("Enter item %d: ", i + 1);
      scanf("%d", &item);
      sum += item;
   }
   avg = (float)sum / count;
   printf("Average = %.2f\n", avg);
}