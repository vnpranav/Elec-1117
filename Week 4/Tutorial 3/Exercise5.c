#include <stdio.h>

void main(void){
   int sum, n, num, i;

   sum = 0;

   printf("");
   scanf("%d", &n);

   for (i = 1; i <= n; i++){
   printf("");
   scanf("%d", &num);
   sum = sum + num;
   }

   printf("Sum : %d", sum);
}