#include <stdio.h>

int qualityPoints(int)

void main(void){
   printf("%d\n", qualityPoints(99));
}

int qualityPoints(int average){
   switch (average)
   {
   case 90 ... 100: return 4;
   case 80 ... 89: return 3;
   case 70 ... 79: return 2;
   case 60 ... 69: return 1;
   }
   return 0;
}