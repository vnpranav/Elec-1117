#include <stdio.h>

#define NUMELEMS 150;

void sieve_of_erastosthenes(int);

int main(void){
   int n = NUMELEMS;
   sieve_of_erastosthenes(n);
   return 0;
}

void sieve_of_erastosthenes(int n){
   // uses a boolean array
   // to mark the multiples of each prime number
   int P[150+1];
   // n + 1 to get 0 to 150

   // setting all to 0
   for (int i = 0; i <= n; i++){
      P[i] = 0;
   }

   // i = 2 then begin loop;
   for (int i = 2; i * i <= n; i++){
      // if P[i] is not changed, then it is a prime
      if (P[i] == 0){
         // set all multiples as non prime
         for (int j = i * i; j <= n; j += i){
            P[j] = 1;
         }
      }
   }

   // display primes
      for (int i = 2; i <= n; i++) {
      if (P[i] == 0) {
         printf("%d ", i);
      }
   }
   printf("\n");
}