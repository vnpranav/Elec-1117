#include <stdio.h>
#include <math.h>

void main(void){
   float x, formula;

   printf("Enter a value for x: ");
   scanf("%f", &x);

   formula = 3 * pow(x,3) - 5 *pow(x,2) + 6;
   printf("Result: %.2f", formula);
}