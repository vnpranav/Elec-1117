#include <stdio.h>

void main(void){
   // calculate 200th triangular number
   int n, sum;
   sum = 0;
   n = 1;
   for (; n <= 200; n++){
      sum += n;
   }
   printf("The 8th triangular number is %d\n", sum);
}