#include <stdio.h>
#include <math.h>

float calculateCharges(float hours){
   float charge;

   if (hours == 24){
         charge = 10.0;
      } else {
         if (hours <= 3){
            charge = 2.0;
         } else {
            charge = 2 + ((ceil(hours - 3) * 0.5));
         }
      }

   return charge;
}

void main(void){
   float hours , charge, total_hours, total_price;
   int addtional = 0;

   total_hours = 0;
   total_price = 0;

   printf("%-5s\t%-5s\t%s", "Car", "Hours", "Charge\n");
   for (int car = 1; car <= 3; car++){
      printf("Enter hours parked: ");
      scanf("%f", &hours);

      charge = calculateCharges(hours);

      total_price += charge;
      total_hours += hours;

      printf("%-5d\t%-5.1f\t%-6.2f\n", car, hours, charge);
   }

   printf("%-5s\t%-5.1f\t%-6.2f\n","TOTAL", total_hours, total_price);
}