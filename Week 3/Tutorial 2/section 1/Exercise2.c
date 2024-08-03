#include <stdio.h>

void main(void){
   float a=10.6, b=13.10, c=-3.42;
   int integral;
   integral = (int)a;
   printf("The integral of %f is %d\n", a, integral);
   integral = (int)b;
   printf("The integral of %f is %d\n", b, integral);
   integral = (int)c;
   printf("The integral of %f is %d\n", c, integral);
}