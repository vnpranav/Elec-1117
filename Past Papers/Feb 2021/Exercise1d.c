#include <stdio.h>

void main(void){
   int i, sum = 0;

   // for loop
   for (i = 2; i < 100; i+=3){
      sum+=i;
   }
   printf("Sum with for loop: %d\n", sum);

   // while loop
   sum = 0;
   i = 2;
   while (i < 100){
      sum += i;
      i += 3;
   }
   printf("Sum with while loop: %d\n", sum);

   // do while loop
   sum = 0;
   i = 2;
   do {
      sum += i;
      i += 3;
   } while (i < 100);
   printf("Sum with do while loop: %d\n", sum);
}