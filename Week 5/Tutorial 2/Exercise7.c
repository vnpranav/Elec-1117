#include <stdio.h>
#include <math.h>

int get_pow_of_2(int);

void main(void){
   printf("%d\n", get_pow_of_2(5));
}

int get_pow_of_2(int num){
   int power = 0;

   while(1){
      if(pow(2, power) >= num){
         break;
      }
      power++;
   }
   return pow(2,power);
}