#include <stdio.h>

void main(void){
   int sum, count;

   sum = 0; count = 0;

   for (int i = 10; i <= 200; i++){
      if ((i % 4 != 0) && (i % 8 == 0)){
         sum++;
         count++;
      }
   }

   printf("Sum : %d\n", sum);
   printf("Count : %d\n", count);
}