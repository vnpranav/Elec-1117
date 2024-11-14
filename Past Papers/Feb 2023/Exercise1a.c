#include <stdio.h>

int factorial(unsigned int);

void main(void){
   unsigned int num;

   printf("Enter a non negative number: ");
   scanf("%u", &num);

   printf("%u! = %u\n", num, factorial(num));
}

int factorial(unsigned int num){
   int product = 1;

   for (int i = 1; i <= num; i++){
      product *= i;
   }

   return product;
}