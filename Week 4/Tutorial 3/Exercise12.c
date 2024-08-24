#include <stdio.h>

void main(void){
   float acc_number, old_limit, new_limit, balance;

   for(int i = 1; i <= 3; i++){
      printf("Enter account number: ");
      scanf("%f", &acc_number);
      printf("Enter old credit limit: ");
      scanf("%f", &old_limit);
      printf("Enter current balance: : ");
      scanf("%f", &balance);

      new_limit = 0.5 * old_limit;
      printf("New credit limit: %.2f\n", new_limit);

      if (balance > new_limit){
         printf("Credit limit exceeded.\n");
      }
   }
}