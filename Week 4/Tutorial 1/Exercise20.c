#include <stdio.h>

void main(void){
   int n, n_fact;
   printf("Table of factorials from 1 to 10\n");
   printf("n\tn^2\n");
   for(n=1; n<=10; n++){
      n_fact = 1;
      for(int i=1; i<=n; i++){
         n_fact *= i;
      }
      printf("%d\t%d\n", n, n_fact);
   }
}