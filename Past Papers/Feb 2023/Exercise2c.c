#include <stdio.h>

#define SIZE 5

void main(void){
   int list1[SIZE], list2[SIZE], dot_product;

   for (int n = 1; n <= 2; n++){
      printf("Enter values for list %d\n", n);

      for (int i = 0; i < SIZE; i++){
         printf("Enter value for element %d: ", i+1);
         
         if (n == 1){
            scanf("%d", &list1[i]);
         } else {
            scanf("%d", &list2[i]);
         }
      }

      printf("\n");
   }

   dot_product = 0;

   for (int i = 0; i < SIZE; i++){
      dot_product += list1[i] * list2[i];
   }

   printf("\nDot product: %d\n", dot_product);
}