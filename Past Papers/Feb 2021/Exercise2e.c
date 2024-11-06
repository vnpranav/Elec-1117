#include <stdio.h>

void main(void){
   int score;
   char grade;

   printf("Enter exam mark: ");
   scanf("%d", &score);

   switch(score){
      case 90 ... 100:
         grade = 'A';
         break;
      case 80 ... 89:
         grade = 'B';
         break;
      case 70 ... 79:
         grade = 'C';
         break;
      case 60 ... 69:
         grade = 'D';
         break;
      default:
         grade = 'F';
   }

   printf("Grade : %c\n", grade);
}