#include <stdio.h>
#include <math.h>

void main(void){
   float t, b;
   t = 8;
   b  = 300000 * exp(-0.032 * t);
   printf("bacteria after %f hours : %f\n",t, b);
}