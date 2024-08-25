#include <stdio.h>
#include <math.h>

float hypotenuse(float, float);

void main(void){
   printf("%.2f", hypotenuse(3.0,4.0));
}

float hypotenuse(float side1, float side2){
   float result = sqrt(pow(side1,2) + pow(side2,2));
   return result;
}