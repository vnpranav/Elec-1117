#include <stdio.h>

int secs_since_12(int, int, int);

void main(void){
   int time1, time2;
   
   time1 = secs_since_12(15,45,12);
   time2 = secs_since_12(16,30,21);

   printf("Time difference : %d s", time2-time1);
}

int secs_since_12(int hours, int mins, int sec){
   if (hours >=12){
      return ((hours-12)*3600 + mins*60 + sec);
   }
 
   return ((hours)*3600 + mins*60 + sec);
}