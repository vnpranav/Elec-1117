#include <stdio.h>
#include <math.h>

void main(void){
   float number, fourth_root;

   number = 1728.89640000;
   fourth_root = pow(number, 0.25);
   printf("Fourth root of %f : %f\n", number, fourth_root);
}