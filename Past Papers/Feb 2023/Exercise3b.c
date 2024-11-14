#include <stdio.h>

#define SIZE 5

int find_sum(int [SIZE], int);
void find_average(int [SIZE], float *);

void main(void){
   int numbers[SIZE], sum;
   float average;

   average = 0.0;

   for (int i = 0; i < SIZE; i++){
      printf("Enter array element %i: ", i+1);
      scanf("%d", &numbers[i]);
   }

   sum = find_sum(numbers, sum);
   find_average(numbers, &average);

   printf("Sum of numbers: %d\n", sum);
   printf("Average : %f\n", average);
}

int find_sum(int numbers[SIZE], int sum){
   for (int i = 0; i < SIZE; i++){
      sum += numbers[i];
   }

   return sum;
}

void find_average(int numbers[SIZE], float *average){
   for (int i = 0; i < SIZE; i++){
      *average += numbers[i];
   }

   *average /= SIZE;
}

// sum should be by reference and float by value