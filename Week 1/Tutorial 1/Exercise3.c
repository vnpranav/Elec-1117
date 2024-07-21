// Identify the syntactic errors in the following program. Then type in and run the
// corrected program to ensure you have correctly identified all the mistakes.

// incorrect program: 
// #include <stdio.h>
// int main (void)
//    int sum;
//    // compute result
//    sum = 25 + 37 - 19
//    // display result
//    printf("The sum is %i\n", sum);
//    return 0;
// }

#include <stdio.h>
int main (void){
   // put opening curly bracket
   int sum;
   // compute result
   sum = 25 + 37 - 19;
   // do not forget semicolon
   // display result
   // comments should have both start and end backslashes
   printf("The sum is %i\n", sum);
   return 0;
}