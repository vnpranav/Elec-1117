#include <stdio.h>

struct Date
{
   int month;
   int day;
   int year;
};

void main(void){
   struct Date today;
   int nodays;
   printf("Enter today's date (month, day, year): ");
   scanf("%d %d %d", &today.month, &today.day, &today.year);
   printf("Today's date is %02d/%02d/%04d\n", today.month, today.day, today.year);

   printf("Tomorrow's date: ");
   today.day++;
   if (today.day > 30){
      today.month++;
      today.day = 1;
   }
   if (today.month > 12){
      today.year++;
      today.month = 1;
   }
   printf("%02d/%02d/%04d\n\n", today.month, today.day, today.year);

   // actual date
   printf("Enter today's date (month, day, year): ");
   scanf("%d %d %d", &today.month, &today.day, &today.year);
   printf("Today's date is %02d/%02d/%04d\n", today.month, today.day, today.year);
   
   printf("Tomorrow's date: ");
   today.day++;
   switch (today.month){
      case 1:
         nodays = 31;
         break;
      case 2:
         if ((today.year % 4 == 0 && today.year % 100 != 0)){
            nodays = 29;
         } else {
            nodays = 28;
         }
         break;
      case 3:
         nodays = 31;
         break;
      case 4:
         nodays = 30;
         break;
      case 5:
         nodays = 31;
         break;
      case 6:
         nodays = 30;
         break;
      case 7:
         nodays = 31;
         break;
      case 8:
         nodays =31;
         break;
      case 9:
         nodays =30;
         break;
      case 10:
         nodays = 31;
         break;
      case 11:
         nodays = 30;
         break;
      case 12:
         nodays = 31;
         break;
      default:
      printf("Invalid month\n");
      nodays = 30;
   }

   if (today.day > nodays){
      today.month++;
      today.day = 1;
   }
   if (today.month > 12){
      today.year++;
      today.month = 1;
   }
   printf("%02d/%02d/%04d\n\n", today.month, today.day, today.year);
}
