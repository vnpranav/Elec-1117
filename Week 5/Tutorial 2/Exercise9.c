#include <stdio.h>
#include <math.h>

int check_prime(int);

void main(void){
   printf("is 43 prime? %d\n", check_prime(43));
}

int check_prime(int n){
   if (n <= 1) return 1;

   for (int i = 2; i <= (n-1); i++){
      if (n % i == 0) return 1;
   }

   return 0;
}