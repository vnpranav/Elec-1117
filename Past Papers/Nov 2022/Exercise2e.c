#include <stdio.h>

void main(void){
   float score;
   char grade;

   for (int i = 0; i < 3; i++){
   printf("Enter exam mark as a percentage (as a number): ");
   scanf("%f", &score);

   if (score < 50) {
      grade = 'F';
   } else if (score >= 50 && score < 70) {
      grade = 'C';
   } else if (score >= 70 && score < 90) {
      grade = 'B';
   } else {
      grade = 'A';
   }

   printf("Exam grade : %c\n\n", grade);
   }
}