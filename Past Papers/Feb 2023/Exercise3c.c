#include <stdio.h>

void main(void){
   int i;
   int sum;

   sum = 0;
   for (i = 2; i < 100; i += 3){
      sum += i;
   }
   printf("sum = %d\n", sum);

   sum = 0; i = 2;
   while (i < 100) {
      sum += i;
      i += 3;
   }
   printf("sum = %d\n", sum);

   sum = 0; i =2;
   do {
      sum += i;
      i += 3;
   } while ( i < 100);
   printf("sum = %d\n", sum);
}