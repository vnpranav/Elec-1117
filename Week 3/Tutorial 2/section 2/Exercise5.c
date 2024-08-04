#include <stdio.h>
// The bank currently contains 12 half-dollars, 20 quarters, 32 dimes, 45 nickels, and 27 pennies.
void main(void){
   float dollars, total_amount;
   int quarters, dimes, nickels, pennies;
   
   dollars = 12.5;
   quarters = 20;
   dimes = 32;
   nickels = 45;
   pennies = 27;
   total_amount = ((quarters * 25 + dimes * 10 + nickels * 5 + pennies) / 100.);
   total_amount += dollars;

   printf("\nTotal amount: %.2f", total_amount);
}