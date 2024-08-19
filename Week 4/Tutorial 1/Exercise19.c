#include <stdio.h>

void main(void){
   int n, n2;
   printf("Table of squares from 1 to 10\n");
   printf("n\tn^2\n");
   for(n=1; n<=10; n++){
      n2 = n*n;
      printf("%d\t%d\n", n, n2);
   }
}