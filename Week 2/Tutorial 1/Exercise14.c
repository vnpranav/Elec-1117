#include <stdio.h>

void main(void){
   int num1, num2, num3, smallest, largest, sum;
   float average;
   smallest = 9999999999;
   largest = -9999999999;

   printf("Enter three numbers: ");
   scanf("%d %d %d", &num1, &num2, &num3);

   if (num1 > num2 && num1 > num3 && num1 > largest){
      largest = num1;
   }
   if (num2 > num1 && num2 > num3 && num2 > largest){
      largest = num2;
   }
   if (num3 > num1 && num3 > num2 && num3 > largest){
      largest = num3;
   }

   if (num1 < num2 && num1 < num3 && num1 < smallest){
      smallest = num1;
   }
   if (num2 < num1 && num2 < num3 && num2 < smallest){
      smallest = num2;
   }
   if (num3 < num1 && num3 < num2 && num3 < smallest){
      smallest = num3;
   }

   sum = num1 + num2 + num3;
   average = (float)sum / 3;

   printf("Product: %d\n", num1 * num2 * num3);
   printf("Sum = %d\n", sum);
   printf("Average = %.2f\n", average);
   printf("Largest = %d\n", largest);
   printf("Smallest = %d\n", smallest);
}