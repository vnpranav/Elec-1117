#include <stdio.h>
#include <math.h>

#define PI 22/7

void main(void){
   float radius, volume, area;

   // test with 1,6,12.2,0.2
   radius = 12.2;

   volume = (4 / 3) * PI * pow(radius,3);
   area = 4 * PI * pow(radius, 2);

   printf("Surface area: %.4f\n", area);
   printf("Volume: %.4f\n", volume);
}