#include <stdio.h>

struct Date_a{
   int month;
   int day;
   int year;
};

struct Date_b
{
   int month;
   int day;
   int year;
   int hour;
   int minute;
   int second;
};

void main(void){
   struct Date_a date1;
   struct Date_b date2;
   int month, day, year, hour, minute, second;
   printf("Enter the date (month, day, year): ");
   scanf("%d %d %d", &month, &day, &year);
   date1.month = month;
   date1.day = day;
   date1.year = year;

   printf("Enter the date (month, day, year, hour, minute, second): ");
   scanf("%d %d %d %d %d %d", &month, &day, &year, &hour, &minute, &second);
   date2.month = month;
   date2.day = day;
   date2.year = year;
   date2.hour = hour;
   date2.minute = minute;
   date2.second = second;

   printf("First date: %d / %d / %d\n", date1.month, date1.day, date1.year);
   printf("Second date: %d / %d / %d , %d : %d : %d \n", date2.month, date2.day, date2.year, date2.hour, date2.minute, date2.second);
}
