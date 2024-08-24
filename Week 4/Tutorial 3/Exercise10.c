#include <stdio.h>

void main(void){
   int fact, num, i;
   printf("Table of factorials\n");
   printf("n\tn!\n");
   
   for (i = 1; i <= 5; i++){
      fact = 1;
      for (num = 1; num <= i; num++){
         fact = fact * num;
      }
      printf("%d\t%d\n", i, fact);
   }
}