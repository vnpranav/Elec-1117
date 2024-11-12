#include <stdio.h>

void main(void){
   int x = 2, sum = 0;

   while (x <= 30){
      sum += x;
      x += 2;
   }

   printf("Sum of numbers divisible by 2 from 2 - 30: %i\n", sum);
}