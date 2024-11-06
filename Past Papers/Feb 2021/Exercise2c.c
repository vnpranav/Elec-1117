#include <stdio.h>

void swap(float*, float*);

void main(void){
   float a = 1, b = 2;

   printf("Before swap: a = %.1f, b = %.1f\n", a, b);
   swap(&a,&b);
   printf("After swap: a = %.1f, b = %.1f\n", a, b);
}

void swap(float *a, float *b){
   float temp;
   temp = *a;
   
   *a = *b;
   *b = temp;
}