// determine the value of the following floating point expressions
#include <stdio.h>
int main(void){
   float result;
   result = 3.0 + 4.0 * 6.0;
   printf("result = %f\n", result);
   result = 3.0 * 4.0 / 6.0 + 6.0;
   printf("result = %f\n", result);
   result = 2.0 * 3.0 / 12.0 * 8.0 / 4.0;
   printf("result = %f\n", result);
   result = 10.0 * (1.0 + 7.0 *3.0);
   printf("result = %f\n", result);
   result = 20.0 - 2.0 / 6.0 + 3.0;
   printf("result = %f\n", result);
   result = 20.0 - 2.0 / (6.0 + 3.0);
   printf("result = %f\n", result);
      result = (20.0 - 2.0) / 6.0 + 3.0;
   printf("result = %f\n", result);
   result = (20.0 - 2.0 )/ (6.0 + 3.0);
   printf("result = %f\n", result);
}