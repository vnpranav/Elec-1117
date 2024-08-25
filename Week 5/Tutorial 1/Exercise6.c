#include <stdio.h>

int get_product(int, int);

void main(void){
   printf("%d\n", get_product(6,10));
}

int get_product(int num1, int num2){
   return num1 * num2;
}