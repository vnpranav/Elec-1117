#include <stdio.h>

void main(void){
   float radius;
   float circumference;

   printf("Enter the radius of a circle: ");
   scanf("%f", &radius);
   circumference =  2 * radius * 3.1416;
   printf("The circumference of the circle is: %f", circumference);
}