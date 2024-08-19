#include <stdio.h>

void main(void){
   int sum,n;

   printf("Table of triangular numbers\n");
   printf("n\tSum from 1 to n\n\n");

for(n=1;n<=10;n++){
   sum = 0;
   for(int i = 1; i<=n;i++){
      sum += i;
   }
   printf("%d\t%d\n",n,sum);
}
}