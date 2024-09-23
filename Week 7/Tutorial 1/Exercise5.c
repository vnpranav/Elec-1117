#include <stdio.h>

int main(void){
   float nums[10] = {1.1, 2.1, 0.5, 10.0, 69.69, 3, 3, 6, 7, 8};
   float sum, avg;

   sum = 0.0;
   for(int i = 0; i < 10; i++){
      sum += nums[i];
   }

   avg = sum / 10.0;
   
   printf("Sum: %f\n", sum);
   printf("Average: %f\n", avg);
   return 0;
}