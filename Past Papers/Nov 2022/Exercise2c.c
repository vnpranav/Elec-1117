#include <stdio.h>   

void main(void){
   unsigned int x, factorial = 1;

   printf("Enter a non negative number: ");
   scanf("%u", &x);

   for (int i = 1; i <= x; i++){
      factorial *= i;
   }

   printf("%u! = %u", x, factorial);
}