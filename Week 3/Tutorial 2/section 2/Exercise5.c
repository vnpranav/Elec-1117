#include <stdio.h>
// The bank currently contains 12 half-dollars, 20 quarters, 32 dimes, 45 nickels, and 27 pennies.
void main(void){
   const float quarter = 25;
   const float dime = 10;
   const float nickel = 5;
   float dollar_amount, total_amount;
   int quarters, dimes, nickels, pennies;

   printf("Enter amount of dollars: ");
   scanf("%f", &dollar_amount);
   printf("\nEnter amount of quarters, dimes, nickels and pennies: ");
   scanf("%d %d %d %d", &quarters, &dimes, &nickels, &pennies);

   total_amount = (quarters * quarter + dimes * dime + nickels * nickel + pennies) / 100.;
   total_amount += dollar_amount;

   printf("\nTotal amount: %.2f", total_amount);
}