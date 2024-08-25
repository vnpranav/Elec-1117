#include <stdio.h>

int get_largest(int, int, int);

void main(void){
   printf("%d\n", get_largest(1,2,3));
}

int get_largest(int num1, int num2, int num3){
   if (num1 >= num2 && num1 >= num3) {
      return num1;
   }
   if (num2 >= num1 && num2 >= num3) {
      return num2;
   }
   return num3;
}