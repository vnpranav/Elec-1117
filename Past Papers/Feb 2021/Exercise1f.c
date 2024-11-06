#include <stdio.h>
#include <math.h>

void main(void){
   float angle;

   printf("Enter angle in degrees: ");
   scanf("%f", &angle);
   angle = fabs(angle);
   
   if (angle > 90){
      printf("Obtuse angle\n");
   } else
   {
      if (angle == 90) {
         printf("Right angle\n");
      }
      else {
         printf("Acute angle\n");
      }
   }
}