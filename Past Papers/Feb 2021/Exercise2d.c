#include <stdio.h>

void main(void){
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

   if(num % 2 == 0){
      printf("Even number\n");
   }else{
      printf("Odd number\n");
   }
}