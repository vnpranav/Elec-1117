#include <stdio.h>

void main(void){
   const float thermal_exp_coeff = 1.2e-6;
   int l, delta_t;
   float delta_l;
   l = 13000;
   delta_t = 100;
   delta_l = thermal_exp_coeff * l * delta_t;
   printf("The change in length is %f\n", delta_l);
}