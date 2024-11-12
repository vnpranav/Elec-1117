#include <stdio.h>

void main(void){
   int x = 1;

   while (x <= 10){
      printf("%-4d", x);
      x++;
   }
   printf("\n");
}