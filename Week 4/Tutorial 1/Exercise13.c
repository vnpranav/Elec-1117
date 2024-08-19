#include <stdio.h>

void main(void){
   // calculate 8th triangular number
   int n, sum;
   sum = 0;
   n = 8;
   for (n = 1; n <= 8; n++){
      sum += n;
   }
   printf("The 8th triangular number is %d\n", sum);
}