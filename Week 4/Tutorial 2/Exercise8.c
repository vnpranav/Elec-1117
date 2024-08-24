#include <stdio.h>

void main(void){
   int sum, i;

   sum = 0;
   for (i = 1; i <= 100; i++){
      if (i % 5 == 0){
         sum += i;
      }
   }
   printf("%d\n", sum);

   sum = 0;
   for (i = 1; i <= 100; i++){
      sum += (i  % 5 == 0) ? i : 0;
   }
   printf("%d\n", sum);
}