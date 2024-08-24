#include <stdio.h>

void main(void){
   float number, accumulator;
   int loop = 1;
   char operation;
   accumulator = 0.0;

   while(loop){
      printf("Enter a number and an operand (+,-,/,S,E): ");
      scanf("%f %c",&number,&operation);

      switch(operation){
         case '+':
            accumulator += number;
            printf("%f\n", accumulator);
            break;
         case '-':
            accumulator -= number;
            printf("%f\n", accumulator);
            break;
         case '*':
            accumulator *= number;
            printf("%f\n", accumulator);
            break;
         case '/':
            if(number != 0){
               accumulator /= number;
               printf("%f\n", accumulator);
            } else {
               printf("Cannot divde by zero");
            }
            break;
         case 'S':
            accumulator = number;
            printf("%f\n", accumulator);
            break;
         case 'E':
            printf("%f\n", accumulator);
            loop = 0;
            printf("End of calculations\n");
            break;
      }
   }
}