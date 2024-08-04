#include <stdio.h>

void main(void){
   float a=10.6, b=13.10, c=-3.42;
   float integral;
   integral = (int)a;
   printf("The integral of %f is %f\n", a, integral);
   integral = (int)b;
   printf("The integral of %f is %f\n", b, integral);
   integral = (int)c;
   printf("The integral of %f is %f\n", c, integral);
   integral = (int) (a+b);
   printf("The integral of %f + %f is %f\n", a, b,integral);
   integral = (int) a+b+c;
   printf("The integral of %f + %f + %f is %f\n", a,b,c,integral);
   integral = (int) (a+b)+c;
   printf("%f\n",integral);
   integral = (int)(a+b+c);
   printf("%f\n",integral);
}