#include <stdio.h>

float calculateCharges(float);

void main(void){
   float total = 0.0;
   float hour1, hour2, hour3, charge;
   int i;

   printf("Enter hours parked for all 3 cars: ");
   scanf("%f %f %f", &hour1, &hour2, &hour3);
   printf("\n");
   printf("Car\tHours\tCharge\n");
   charge = calculateCharges(hour1);
   printf("1\t%.2f\t%.2f\n", hour1, charge);
   total += charge;
   charge = calculateCharges(hour2);
   printf("2\t%.2f\t%.2f\n", hour2, charge);
   total += charge;
   charge = calculateCharges(hour3);
   printf("3\t%.2f\t%.2f\n", hour3, charge);
   total += charge;
   printf("\n");
   printf("Total charge: $%.2f\n", total);
}

float calculateCharges(float hours){
   float charge, total;
   if (hours <= 3){
      return 3.0;
   }

   total = 3.0;
   charge = 3.0;

   for(float hour = hours - 3; hour > 0; hour--){
      charge += 0.5;
      if (charge >= 10){
         charge = 10;
      }
      total += charge;
   }

   return total;

}
