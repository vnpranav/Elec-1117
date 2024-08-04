#include <stdio.h>
#include <math.h>

void main(void){
   float tfin, itemp, k, a;
   int t;
   a = 50.;
   k = 0.0367;
   itemp = 150;
   t = 10;
   tfin = a + (itemp - a) * exp(-k*t);
   printf("Final temperature: %f C", tfin);
}