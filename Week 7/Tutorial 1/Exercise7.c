#include <stdio.h>

void readinput(int table[20][30], int, int);
void computesums(int table1[20][30], int table2[20][30], int sumTable[20][30], int rows, int cols);
void writeoutput(int table[20][30], int rows, int cols);


void main(void){
   int table1[20][30], table2[20][30];
   int sumTable[20][30];
   
   printf("Entering values for table 1 : \n");
   readinput(table1, 20, 30);

   printf("Entering values for table 2 : \n");
   readinput(table2, 20, 30);

   computesums(table1, table1, sumTable, 20, 30);

   writeoutput(sumTable, 20, 30);
}

void readinput(int table[20][30], int row, int col){
   int i, j;
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("Enter value for table[%i][%i] : ", i,j);
         scanf("%i", &table[i][j]);
      }
   }
}

void computesums(int table1[20][30], int table2[20][30], int sumTable[20][30], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumTable[i][j] = table1[i][j] + table2[i][j];
        }
    }
}

void writeoutput(int table[20][30], int rows, int cols) {
    printf("The resulting table of sums is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
}