#include <stdio.h>

void main(void){
   int sum, n;

   sum = 0;

   for (n=3; n<=100; n+=3){
      sum += n;
   }
   printf("%d\n", sum);

   sum = 0;
   n = 100;
   while (n >= 3){
      if ( n % 3 == 0) {
         sum += n;
      }
      n--;
   }
   printf("%d\n", sum);

   sum = 0;
   n = 3;
   do {
      if (n % 3 == 0)
         sum += n;
      n = n + 1;
   }while (n <= 100);
   printf("%d\n", sum);
}