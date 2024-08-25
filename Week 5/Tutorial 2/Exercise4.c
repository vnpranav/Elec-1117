#include <stdio.h>

int get_larger(int, int);

void main(void){
   printf("%d\n", get_larger(2,4));
}

int get_larger(int num1, int num2){
   if (num1 > num2) {
      return num1;
   }
   return num2;
}