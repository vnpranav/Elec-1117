#include <stdio.h>

void main(void){
   int num1, num2, num3, max;

   printf("Enter a first number: ");
   scanf("%d", &num1);
   printf("Enter a second number: ");
   scanf("%d", &num2);
   printf("Enter a third number: ");
   scanf("%d", &num3);

   max = num1;
   if (num2 > num3 && num2 > num1){
      max = num2;
   } else {
      if (num3 > num1 && num3 > num2){
         max = num3;
      }
   }

   printf("The maximum number is : %d\n", max);
}