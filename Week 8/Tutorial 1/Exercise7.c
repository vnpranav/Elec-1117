#include <stdio.h>
#include <string.h>

struct man_days{
   char name[10];
   int days;
};

#define NUMELEMS 12

void main(void){
   struct man_days convert[NUMELEMS];
   int month_num;

   strcpy(convert[0].name, "January");
   convert[0].days = 31;
   strcpy(convert[1].name, "February");
   convert[1].days = 28;
   strcpy(convert[2].name, "March");
   convert[2].days = 31;
   strcpy(convert[3].name, "April");
   convert[3].days = 30;
   strcpy(convert[4].name, "May");
   convert[4].days = 31;
   strcpy(convert[5].name, "June");
   convert[5].days = 30;
   strcpy(convert[6].name, "July");
   convert[6].days = 31;
   strcpy(convert[7].name, "August");
   convert[7].days = 31;
   strcpy(convert[8].name, "September");
   convert[8].days = 30;
   strcpy(convert[9].name, "October");
   convert[9].days = 31;
   strcpy(convert[10].name, "November");
   convert[10].days = 30;
   strcpy(convert[11].name, "December");
   convert[11].days = 31;

   printf("Enter numeric value of a month: ");
   scanf("%d", &month_num);

   if(month_num < 1 || month_num > 12){
      printf("Invalid month");
   } else {
      printf("The month of %s has %d days.\n", convert[month_num - 1].name, convert[month_num-1].days);
   }
}