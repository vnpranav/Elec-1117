#include <stdio.h>

void main(void){
   int x,y,z,result;
   printf("Enter 3 numbers: ");

   scanf("%d %d %d", &x,&y,&z);

   result = x*y*z;

   printf("The product is: %d",result);
}