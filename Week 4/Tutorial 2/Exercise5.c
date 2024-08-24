#include <stdio.h>

void main(void){
   int num1, num2;
   float result;
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   if (num2 != 0){
      result = (float)num1 / num2;
      printf("%d divided by %d gives %.3f", num1, num2, result);
   } else {
      printf("Error: Division by zero is not allowed.");
   }
}