#include <stdio.h>

void main(void){
   int num1, num2, total;
   float average;

   num1 = 15;
   num2 = 18;
   
   total  = num1+ num2;
   average = total / 2.0;

   printf("Total of the two numbers: %d\n", total);
   printf("Average of the two numbers: %f\n", average);
}