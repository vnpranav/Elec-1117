#include <stdio.h>

void main(void){
   int k;
   float w, d;
   d = .55, k = 300;
   w = 0.5 * k *(d*d);
   printf("work done : %.4fj\n", w);
}