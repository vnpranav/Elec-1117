#include <stdio.h>
#include <math.h>

void main(void){
   int a,b,c;
   float discriminant, root1, root2;

   printf("Enter coefficient of x^2: ");
   scanf("%d", &a);
   printf("Enter coefficient of x: ");
   scanf("%d", &b);
   printf("Enter constant term coefficient: ");
   scanf("%d", &c);

   discriminant = pow(b,2) - 4 * a * c;

   if (discriminant > 0){
      discriminant =  sqrt(discriminant);
      root1 = (-b + discriminant) / (2 * a);
      root2 = (-b - discriminant) / (2 * a);
      printf("Two real roots\n");
      printf("Roots are : %.5f, %.5f\n", root1, root2);
   }
   else{
      if (discriminant == 0){
         root1 = -b / (2*a);
         printf("Only one real root\n");
         printf("Root is : %.5f\n", root1);
      } else {
         discriminant = sqrt(-1 * discriminant) / (2*a);
         printf("No real roots\n");
         printf("Imaginary roots are %d + %.5fj and %d - %.5fj\n", -b, discriminant, -b, discriminant);
      }
   }
}