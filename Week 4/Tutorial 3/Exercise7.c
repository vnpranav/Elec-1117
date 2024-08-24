#include <stdio.h>

void main(void){
   int smallest, n, num, i;

   smallest = 99999;

   printf("");
   scanf("%d", &n);

   for (i = 1; i <= n; i++){
   printf("");
   scanf("%d", &num);
   smallest = (num <= smallest)? num : smallest;
   }

   printf("smallest : %d", smallest);
}