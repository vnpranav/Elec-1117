#include <stdio.h>
#include <math.h>

void main(void){
   int n, square, cube;

   printf("%-3s %-5s %s\n", "n", "n^2", "n^3");

   for (n = 1; n <=10; n++){
      square = n*n;
      cube = pow(n,3);

      if (cube > 500){
         printf("%-3d %-5d %d*\n", n, square, cube);
      }
      else {
         printf("%-3d %-5d %d\n", n, square, cube);
      }
   }
}