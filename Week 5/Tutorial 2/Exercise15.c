#include <stdio.h>

void even_or_odd(int num){
   if(num % 2 == 0){
      printf("%d is even\n\n", num);
      return;
   }
   printf("%d is odd\n\n", num);
}

void main(void){
   int num;

   for(int _ = 1; _ <= 10 ; _++){
      printf("Enter number: ");
      scanf("%d", &num);
      even_or_odd(num);
   }
}