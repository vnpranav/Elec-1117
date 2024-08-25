#include <stdio.h>

int three_to_the_power_of(int);

void main(void){
   printf("3 ^ 4 : %d", three_to_the_power_of(4));
}

int three_to_the_power_of(int exponent){
   if(exponent == 0){
      return 1;
   } else {
      return 3 * three_to_the_power_of(exponent - 1);
   }
}