#include <stdio.h>

void main(void){
   int a, b;

   a = 0;
   printf("a has been initialised to 0.\n b is assigned to a using pre and post incrementing\n");

   b = ++a;
   printf("With pre-incrementing\n");
   printf("a = %d, b = %d\n\n",a,b);

   b = a++;
   printf("With post-incrementing\n");
   printf("a = %d, b = %d\n\n",a,b);
}