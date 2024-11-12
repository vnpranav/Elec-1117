#include <stdio.h>

#define PI 3.14159

void main(void){
   float radius, diameter, circumference, area;

   printf("Enter radius: ");
   scanf("%f", &radius);

   diameter = 2 * radius;
   circumference = 2 * PI * radius;
   area = PI * radius * radius;

   printf("Diameter = %.5f\n", diameter);
   printf("Circumference = %.5f\n", circumference);
   printf("Area = %.5f\n", area);
}