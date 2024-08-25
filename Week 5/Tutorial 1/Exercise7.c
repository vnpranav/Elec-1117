#include <stdio.h>

float divide(int, int);

void main(void){

   printf("%.2f", divide(1,3));
}

float divide(int num1, int num2){
   if (num2 == 0) {
      printf("Error: Division by zero is not allowed.\n");
      return 0;
   } else {
      return (float) num1 / num2;
   }
}