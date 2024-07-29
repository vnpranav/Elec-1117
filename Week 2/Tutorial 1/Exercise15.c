#include <stdio.h>
#define PI  3.14159;

void main(void){
   int diameter;
   float circumference, area;

   printf("Enter the diameter of the circle: ");
   scanf("%d", &diameter);

   circumference = diameter * PI;
   area = (diameter / 2) * (diameter / 2) * PI;

   printf("Circumference: %.2f\n", circumference);
   printf("Area : %.2f\n", area);
}