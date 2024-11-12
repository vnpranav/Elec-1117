#include <stdio.h>

struct time
{
   int hours;
   int minutes;
};

void main(void){
   struct time current_time;

   printf("Enter current time\n");
   printf("Enter hours: ");
   scanf("%d", &current_time.hours);
   printf("Enter minutes: ");
   scanf("%d", &current_time.minutes);
   
   printf("Current time = %02d:%02d\n", current_time.hours, current_time.minutes);
   printf("\nOne minute later\n\n");
   current_time.minutes++;

   if (current_time.minutes > 60){
      current_time.minutes = 0;
      current_time.hours++;

      if (current_time.hours > 24){
         current_time.hours = 0;
         printf("It's a new day\n");
      }
   }
   printf("Time = %02d:%02d\n", current_time.hours, current_time.minutes);
}
