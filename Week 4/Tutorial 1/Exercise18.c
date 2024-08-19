#include <stdio.h>

void main(void){
   int num1, num2, div, greatestdiv, count;
   
   greatestdiv = div = 1;
   num1 = 20;
   num2 = 36;

   while (div <= num1 && div <= num2){
      if (num1 % div == 0 && num2 % div == 0){
         if (div > greatestdiv)
         greatestdiv = div;
         }
      div++;
   }
   printf("The greatest common divisor of %d and %d is %d\n", num1, num2, greatestdiv);
}