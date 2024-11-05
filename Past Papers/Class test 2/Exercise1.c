#include <stdio.h>

void print_rows(int);

void main(void){
   int n;

   printf("Enter number of rows to be printed: ");
   scanf("%d", &n);
   print_rows(n);
}

void print_rows(int n){
   int num;
   for (int i = 1; i <= n; i++){
      num  = i;
      for (int j = 1; j <= i; j++){
         printf("%d", num);
      }
      printf("\n");
   }
   printf("\n");
}