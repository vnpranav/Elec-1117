#include <stdio.h>
#include <math.h>

float round_up(float num){
   return floor(num + .5);
}

void main(void){
   int nums;
   float num;

   printf("Enter number of numbers to be rounded: ");
   scanf("%d", &nums);

   for (int _ = 1; _ <= nums ; _++){
      printf("Enter number %d: ", _);
      scanf("%f", num);
      printf("Original number; %.2f\n", num);
      printf("Rounded: %.2f\n\n", round_up(num));
   }
}