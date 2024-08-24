#include <stdio.h>

void main(void){
   int sum , num, count;
   float avg;
   sum = 0 ;
   count = 0;

   while (1){
      scanf("%d",&num);
      if (num == 9999){
         break;
      } else {
         sum += num ;
         count++;
      }
   }

   if (count == 0){
      printf("No input.\n"); 
   } else {
      avg = (float)sum/count ;
      printf("Average = %.2f\n",avg);
   }
}