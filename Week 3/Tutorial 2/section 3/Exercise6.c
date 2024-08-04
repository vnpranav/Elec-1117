#include <stdio.h>
#include <math.h>

void main(void){
   float amount, i, deposit;
   int n;

   n = 4, deposit = 10000, i = 0.1;
   amount = deposit * pow((1+i) , n);
   printf("The amount after %d years is $%.2f\n", n, amount);
}