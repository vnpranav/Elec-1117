#include <stdio.h>

int square(int*);

void main(void){
   int num = 5;
   printf("The square of %d is : %d\n", num, square(&num));
}

int square(int* num){
   return *num * *num;
}