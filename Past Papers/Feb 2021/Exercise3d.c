#include <stdio.h>

void main(void){
   int arr[] = {1,21,3,4,-5,-20,3,69};
   int *min;

   *min = arr[0];

   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
      if (arr[i] < *min){
         *min = arr[i];
         min = &arr[i];
      }
   }

   printf("Minimum value : %d\n", *min);
}