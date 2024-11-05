#include <stdio.h>

#define SIZE 3

int* add_matrices(int a[SIZE][SIZE], int b[SIZE][SIZE]);

void main(void){
   int* sum_ptr;
   int a[SIZE][SIZE] = {
   {1,1,1},
   {1,1,1},
   {1,1,1}};

   int b[SIZE][SIZE] = {
      {2,2,2},
      {2,2,2},
      {2,2,4}
   };

   sum_ptr = add_matrices(a, b);

   

   for (int i = 0; i < SIZE; i++){
      for (int j = 0; j < SIZE; j++){
         printf("%d ", *(sum_ptr + i * SIZE + j));
      }
      printf("\n");
   }
}

int* add_matrices (int a[SIZE][SIZE], int b[SIZE][SIZE]){
   static int sum[SIZE][SIZE];

   for (int i = 0; i < SIZE; i++){
      for (int j = 0; j < SIZE; j++){
         sum[i][j] = a[i][j] + b[i][j];
      }
   }

   return *sum;
}