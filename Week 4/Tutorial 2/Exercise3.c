#include <stdio.h>

void main(void){
   int year;

   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 4 == 0 && year % 100 != 0){
      printf("%d is a leap year.\n", year);
   } else {
      printf("%d is not a leap year.\n", year);
   }
}