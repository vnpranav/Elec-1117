#include <stdio.h>
#include <math.h>

void main(void){
   int a,b,c,s;
   float area;
   a = 3, b = 4, c = 5;
   s = (a + b + c) / 2;
   area = sqrt(s * (s - a) * (s - b) * (s-c));
   printf("Area : %f", area);
}