#include <stdio.h>

void main(void){
   const float pi = 3.1416;
   float radius, circumference;
   
   radius = 2.57;
   circumference = 2 * pi * radius;
   printf("The circumference of the circle with radius %.2f inches is : %.4f inches", radius, circumference);
}