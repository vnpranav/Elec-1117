#include <stdio.h>

void main(void){
   int a, b;

   a = 1;
   b = 0;
   printf("Initially\n");
   printf("a = %d, b = %d\n", a, b);

   printf("\nPost incrementing a\n");
   b = a++;
   printf("a = %d, b = %d\n", a, b);

   printf("\nPre incrementing a\n");
   b = ++a;
   printf("a = %d, b = %d\n", a, b);
}