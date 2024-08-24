#include <stdio.h>
#include <math.h>

void main(void){
   float a, r;
   int p, n;

   p = 1000;
   
   for (r = 0.05; r <= 0.1; r+=0.01){
   printf("Amount for the next 10 years with rate %.2f\n", r);
   for (n = 1; n <= 10; n++){
      a = p * pow((1+r), n);
      printf("\nYear %d: $%.2f", n, a);
   }
   printf("\n\n");
   }

}