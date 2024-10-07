#include <stdio.h>
#include <string.h>

struct Employee{
   int num;
   char name[20];
   float rate;
   int hours;
};

#define NUMEMP 6

void populateArray(struct Employee[], int);

void main(void){
   struct Employee employees[NUMEMP];
   float grossPay;

   populateArray(employees, NUMEMP);

   printf("Number\t  Name  \tRate\tHours\tGross Pay\n");
   for(int i = 0; i < NUMEMP; i++){
      grossPay = employees[i].hours * employees[i].rate;
      printf("%06d\t%8s\t%04.2f\t%05d\t%.2f\n",employees[i].num, employees[i].name, employees[i].rate, employees[i].hours, grossPay);
   }
}

void populateArray(struct Employee arr[], int size){
   int num, hours;
   float rate;
   char name[20];

   for (int i = 0; i < size; i++){
      printf("Enter employee %d's number: ", i+1);
      scanf("%d", &num);
      printf("Enter employee %d's name: ", i+1);
      scanf("%s", name);
      printf("Enter employee %d's rate: ", i+1);
      scanf("%f", &rate);
      printf("Enter employee %d's hours: ", i+1);
      scanf("%i", &hours);

      arr[i].num = num;
      arr[i].hours = hours;
      arr[i].rate = rate;
      strcpy(arr[i].name, name);
   }
}