#include <stdio.h>

int * findMax(int [], int);

void main(void){
   int length;

   printf("Enter length of array: ");
   scanf("%d", &length);

   int numbers[length];

   for (int i = 0; i < length; i++){
      printf("Enter array element %d: ", i + 1);
      scanf("%d", &numbers[i]);
   }

   printf("The maximum array element is %d\n", *findMax(numbers, length));
}

// or return integer value

int *findMax(int numbers[], int length){
   int *max;

   max = &numbers[0];
   for (int i = 0; i < length; i++){
      if (numbers[i] > *max){
         max = &numbers[i];
         *max = numbers[i];
      }
   }

   return max;
}