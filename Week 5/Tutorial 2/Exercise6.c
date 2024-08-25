#include <stdio.h>
#include <math.h>

int absolute(int);

void main(void){
   printf("%d", absolute(-69));
}

int absolute(int num){
   if (num < 0) {
      return -num;
   }
   return num;
}