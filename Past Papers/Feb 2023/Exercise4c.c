#include <stdio.h>

struct time {
   int hour;
   int minute;
};

void main(void){
   struct time current_time;

   printf("Enter current time\n");
   printf("Enter hour: ");
   scanf("%d", &current_time.hour);
   printf("Enter minute: ");
   scanf("%d", &current_time.minute);
   
   printf("Current time = %02d:%02d\n", current_time.hour, current_time.minute);
   printf("\nOne minute later\n\n");
   current_time.minute++;

   if (current_time.minute > 60){
      current_time.minute = 0;
      current_time.hour++;

      if (current_time.hour > 24){
         current_time.hour = 0;
         printf("It's a new day\n");
      }
   }
   printf("Time = %02d:%02d\n", current_time.hour, current_time.minute);
}