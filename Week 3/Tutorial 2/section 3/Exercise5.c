#include <stdio.h>
#include <math.h>

void main(void){ 
   float r, g, t;

   r = 700.0;
   g = 9.81;
   t = 2 * 3.1416 * sqrt(r/g);
   printf("Period : %f", t);
}