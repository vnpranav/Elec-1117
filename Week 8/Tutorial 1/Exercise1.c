#include <stdio.h>

struct Date
{
   int month;
   int day;
   int year;
};

struct s_temp1 {
   int id;
   int credits;
   float cgpa;
};

struct s_temp2{
   char name[30];
   struct Date birth;
   int credits;
   float cgpa;
};

struct Inventory
{
   int partno;
   int partdescri;
   int partqty;
   int partreorder;
};


struct s_temp3{
   char name[30];
   int price;
   struct Date purchased;
   struct Inventory details;
};

void main(void){
   
}