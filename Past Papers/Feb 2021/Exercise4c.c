#include <stdio.h>

#define ROW 20
#define COL 30

void readinput(int, int, int [ROW][COL]);
void computesums(int, int, int [ROW][COL], int [ROW][COL], int [ROW][COL]);
void writeoutput(int, int, int [ROW][COL]);

void main(void){
   int a[ROW][COL], b[ROW][COL], c[ROW][COL];

   readinput(ROW,COL,a);
   readinput(ROW,COL,b);

   printf("Values for table a: \n");
   writeoutput(ROW,COL,a);
   printf("Values for table b: \n");
   writeoutput(ROW,COL,b);

   computesums
(ROW,COL,a,b,c);
   printf("Sum of both tables: \n");
   writeoutput(ROW,COL,c);
}

void readinput(int row, int col, int arr[ROW][COL]){
   for (int i = 0; i < row; i++){
      for (int j = 0; j < col; j++){
         // random integers between 1 and 0
         arr[i][j] = rand() % 2;
      }
   }
}

void computesums(int row, int col, int a[ROW][COL], int b[ROW][COL], int sum[ROW][COL]){
   for (int i = 0; i < row; i++){
      for (int j = 0; j < col; j++){
         sum[i][j] = a[i][j] + b[i][j];
      }
   }
}

void writeoutput(int row, int col, int arr[ROW][COL]){
   for (int i = 0; i < row; i++){
      for (int j = 0; j < col; j++){
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   printf("\n\n");
}