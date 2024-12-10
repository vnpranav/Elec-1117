#include <stdio.h>

void main(void){
   float num1, num2, result;
   char operator;

   printf("Enter first number: ");
   scanf("%f", &num1);
   printf("Enter second number: ");
   scanf("%f", &num2);
   printf("Enter operator (+, -, *, /): ");
   scanf(" %c", &operator);

   switch (operator)
   {
   case '+':
      result = num1 + num2;
      break;
   case '-':
      result = num1 - num2;
      break;
   case '*':
      result = num1 * num2;
      break;
   case '/':
      // num == 0
      result = num1 / num2;
      break;
   default:
      printf("Invalid operator\n");
      result  = 0;
      break;
   }

   printf("Result = %f\n", result);
}