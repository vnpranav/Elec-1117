#include <stdio.h>

#define SIZE 10

int whatIsThis(const int b[], size_t p);

void main(void){
   int x;
   int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};

   x = whatIsThis(a, SIZE);
   printf("%d\n", x);
}

int whatIsThis(const int b[], size_t p){
   if (1 == p){
      return b[0];
   } else {
      return b[p - 1] + whatIsThis(b, p-1);
   }
}