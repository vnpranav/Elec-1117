#include <stdio.h>

void square(int);

void main(void){
   square(5);
}

void square(int length){
   int i,j;
   for(i=0;i<length;i++){
      for(j=0;j<length;j++){
         printf("*");
      }
      printf("\n");
   }
   printf("\n");
}