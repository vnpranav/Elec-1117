#include <stdio.h>
#include <math.h>

void main(void){
   int x1, y1, x2, y2;
   float distance;
   x1 = 7, y1= 12;
   x2 = 3, y2 = 9;
   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   printf("Distance : %f", distance);
}