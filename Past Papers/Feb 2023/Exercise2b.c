#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void sum_even_odd(int [SIZE]);

void main(void){
   int numbers[SIZE];

   srand(time(0));

   for (int i = 0; i < SIZE; i++){
      numbers[i] = (rand() % 30) + 1;

      // printf("Enter array element %i: ", i+1);
      // scanf("%d", numbers[i]);
   }

   printf("Array of numbers: ");
   for (int i = 0; i < SIZE; i++){
      printf("%d ", numbers[i]);
   }
   printf("\n");

   sum_even_odd(numbers);
}

void sum_even_odd(int numbers[SIZE]){
   int sum_odd = 0, sum_even = 0;

   for (int i = 0 ; i < SIZE; i++){
      if (numbers[i] % 2 == 0) {
         sum_even += numbers[i];
      } else {
         sum_odd += numbers[i];
      }
   }

   printf("Sum of even numbers: %d\n", sum_even);
   printf("Sum of odd numbers: %d\n", sum_odd);
}