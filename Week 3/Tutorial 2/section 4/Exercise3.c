#include <stdio.h>

void main(void){
   int length, width, area;
   printf("Enter the length of the room: ");
   scanf("%d", &length);
   printf("Enter the width of the room: ");
   scanf("%d", &width);
   area = length * width;
   printf("The area of the room is: %d", area);
}