#include <stdio.h>
#include <math.h>

void main(void){
   int year = 2010;
   float population;

   population = 6.0 * exp(0.02*(year-2000));
   printf("population in %d: %f billions", year, population);
}