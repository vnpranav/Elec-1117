#include <stdio.h>
#include <stdlib.h>

void main(void){
   int firstNum, secondNum;

   printf("Enter two numbers: ");

   scanf("%d %d", &firstNum, &secondNum);

   printf("Sum = %d\n", firstNum+secondNum);
   printf("Difference = %d\n", abs(firstNum - secondNum));
   printf("Product = %d\n", firstNum * secondNum);
   printf("Quotient of %d divided by %d = %d\n", firstNum, secondNum, firstNum / secondNum);
   printf("Remainder of %d divided by %d = %d\n", firstNum, secondNum, firstNum % secondNum);
}