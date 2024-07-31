#include <stdio.h>

void main(void){
   const float pi = 3.1416;
   float circumference,radius2, radius = 2.57;

   radius2 = radius*radius;
   circumference = 2*pi*radius2;
   printf("The circumference of the circle with radius %.4f inches is : %.4f inches", radius2, circumference);
}