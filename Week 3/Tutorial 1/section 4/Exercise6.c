#include <stdio.h>
#include <math.h>

void main(void){
   float paid, check;
   int change, dollars,quarters, dimes, pennies, nickles;
   check = 12.36;
   paid = 20.;

   change =  ceil((paid-check) * 100);
   printf("Your change: %d cents\n", change);

   dollars = change / 100;
   change = change % 100;

   quarters = change / 25;
   change = change % 25;

   dimes = change / 10;
   change = change % 10;

   nickles = change / 5;
   change = change % 5;

   pennies = change;

   printf("-------Change breakdown-------\n");
   printf("Dollars: %d\n", dollars);
   printf("Quarters: %d\n", quarters);
   printf("Dimes: %d\n", dimes);
   printf("Nickles: %d\n", nickles);
   printf("Pennies: %d\n", pennies);
}