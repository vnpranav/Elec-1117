#include <stdio.h>

void main(void){
   int product, i;
   product = 1;
   for (i = 1; i <= 15; i++){
      if (i % 2 == 1){
         product *= i;
      }
   }
   printf("%d\n", product);
}