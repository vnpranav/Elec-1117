#include <stdio.h>

void swap(float *num1, float *num2){
   float temp;

   temp = *num1;
   
   *num1 = *num2;
   *num2 = temp;
}

void main(void){
   float num1 = 4.0, num2 = 5.0;

   printf("Before swapping: \nnum 1 = %.1f, num 2 = %.1f\n", num1, num2);
   swap(&num1, &num2);
   printf("After swapping: \nnum 1 = %.1f, num 2 = %.1f\n", num1, num2);
}