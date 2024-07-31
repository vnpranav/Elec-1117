#include <stdio.h>

void main(void){
   float length=5.48, width=3.5;
   float area, permieter;
   area = length * width;
   permieter = 2 * (length + width);
   printf("The area of the rectangle with length %.2f inches and width %.2f inches is %.2f inches^2\n", length,width,area);
   printf("The perimeter of the rectangle with length %.2f inches and width %.2f inches is %.2f inches\n",length, width, permieter);
}