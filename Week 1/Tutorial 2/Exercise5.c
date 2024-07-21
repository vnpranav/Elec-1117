// determine the value of the following integer expressions
int main(void){
   int result;
   result = 3 + 4 *6;
   printf("result = %d\n", result);
   result = 3 * 4 / 6 + 6;
   printf("result = %d\n", result);
   result = 2 * 3 / 12 * 8 / 4;
   printf("result = %d\n", result);
   result = 10 * (1+7*3);
   printf("result = %d\n", result);
   result = 20 - 2 / 6 + 3;
   printf("result = %d\n", result);
   result  = 20 - 2 / (6 + 3);
   printf("result = %d\n", result);
   result  = (20 - 2) / 6 + 3;
   printf("result = %d\n", result);
   result  = (20 - 2) / (6 + 3);
   printf("result = %d\n", result);
   result = 50 % 20;
   printf("result = %d\n", result);
   result = (10+3)%4;
   printf("result = %d\n", result);
}  