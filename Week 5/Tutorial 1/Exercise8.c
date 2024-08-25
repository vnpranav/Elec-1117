#include <stdio.h>

float get_avg_of_5(void);

void main(void){
   printf("Average of 5 : %.2f", get_avg_of_5());
}

float get_avg_of_5(void){
   float sum, num, i;

   sum = 0.0;

   for(i = 1; i <= 5; i++){
      printf("Enter number %.0f: ", i);
      scanf("%f", &num);
      sum += num;
   }

   return sum/ 5;
}