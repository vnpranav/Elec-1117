#include <stdio.h>

int main(void){
   printf("Testing...");
   printf("....1");
   printf("...2");
   printf("..3");
   printf("\n");
   return 0;
}

// output : Testing.......1...2..3
// Explanation : the print functions for lines 4 - 7 do not have the \n at the end. the next line to be printed continues on the previous line displayed. hence all lines are displayed on the same lines.
// if we want to print on a new line we should specify the \n at the end of the string