#include <stdio.h>

void main(void){
   int sum, i;

   sum = 0;

   for (i = 2; i <= 30; i+= 2){
      if (i % 2 == 0){
         sum += i;
      }
   }
   printf("%d", sum);
}