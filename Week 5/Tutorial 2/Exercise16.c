#include <stdio.h>

float get_smallest(float num1, float num2, float num3){
   if (num1 <= num2 && num1 <= num3) {
      return num1;
   }
   else if (num2 <= num1 && num2 <= num3) {
      return num2;
   }
   return num3;
}

void main(void){
   
}