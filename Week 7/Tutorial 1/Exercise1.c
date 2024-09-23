#include <stdio.h>

void main(void){
   int counts[10];
   int bonus[15];
   float monthlyTemperatures[12];
   int bestScores[5] = {10, 11, 12,9 , 10};

   for(int i = 0; i<10; i++){
      counts[i] = 0;
   }

   for(int i = 0; i < 15; i++){
      bonus[i] += 1;
   }

   for(int i = 0; i < 12; i++){
      printf("Enter montly temperature %d :", i);
      scanf("%f", &monthlyTemperatures[i]);
   }

   for(int i =0; i< 5; i++){
      printf("best score %d : %d", i, bestScores[i]);
   }
}