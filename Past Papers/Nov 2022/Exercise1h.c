#include <stdio.h>

void main(void){
   int a;

   printf("%-5s\t%-5s\t%-5s\t%-5s\n", "A", "A+2", "A+4", "A+6");
   a = 3;
   while (a <= 15){
      printf("%-5d\t%-5d\t%-5d\t%-5d\n",a , a+2, a+4, a+6);
      a +=3;
   }
}