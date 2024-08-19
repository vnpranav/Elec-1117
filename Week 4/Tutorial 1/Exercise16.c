#include <stdio.h>

void main(void){
   int n, sum;

   sum = 0;
   printf("What triangular number do you want? ");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
      sum += i;
   }
   printf("The %d triangular number is %d.\n", n, sum);
}