#include <stdio.h>

void main(void){
   int wholesale_price = 899;
   float total_price, tax_rate = 0.06;

   total_price = wholesale_price + (wholesale_price * tax_rate);
   printf("Total price for a laptop of price $%d : $%.2f\n",wholesale_price, total_price);
}