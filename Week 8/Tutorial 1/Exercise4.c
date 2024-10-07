#include <stdio.h>

struct Time{
   int hour;
   int minute;
};

void main(void){
   struct Time curr_time;
   printf("Enter current time(hour, minute): ");
   scanf("%d %d", &curr_time.hour, &curr_time.minute);

   printf("After 1 minute,\n");
   curr_time.minute += 1;
   if (curr_time.minute >= 60) {
      curr_time.minute = 0;
      curr_time.hour += 1;
   }
   printf("Current time is %02d:%02d\n", curr_time.hour, curr_time.minute);
}