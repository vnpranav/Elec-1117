#include <stdio.h>
#include <ctype.h>

#define PI 22/7

void main(void){
   char shape;
   float area;
   int width, height, radius;

   printf("1. Circle (C)\n2. Square (S)\n3. Triangle (T)\n4. Rectangle (R)\n\n");
   printf("Choose shape using character in brackets: ");
   scanf("%c", &shape);

   shape = toupper(shape);

   switch (shape){
      case 'C':
         printf("Enter circle radius: ");
         scanf("%d", &radius);
         area = PI * radius * radius;
         printf("Area : %.4f\n", area);
         break;
      case 'S':
         printf("Enter square width: ");
         scanf("%d", &width);
         area = width * width;
         printf("Area : %.4f\n", area);
         break;
      case 'T':
         printf("Enter triangle base width: ");
         scanf("%d", &width);
         printf("Enter triangle height: ");
         scanf("%d", &height);
         area = 0.5 * width * height;
         printf("Area : %.4f\n", area);
         break;
      case 'R':
         printf("Enter rectangle width: ");
         scanf("%d", &width);
         printf("Enter rectangle height: ");
         scanf("%d", &height);
         area = width * height;
         printf("Area : %.4f\n", area);
         break;
      default :
         printf("Wrong shape code entered\n");
   }
}

