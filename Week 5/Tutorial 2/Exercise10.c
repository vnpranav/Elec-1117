#include <stdio.h>

int get_leading_digit(int);

void main(void){
   printf("%d\n", get_leading_digit(234567));
}

int get_leading_digit(int num){
   int lead = 0;
   while (num > 0) {
      lead = num % 10;
      num = num / 10;
   }
   
   return lead;
}