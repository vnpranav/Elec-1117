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
   struct s_temp1 student = {4672, 68, 3.01};
   struct s_temp2 student2 = {"Rhona Karp",{8,4,1960}, 96, 3.89};
   struct s_temp3 stock = {"IBM", 134.5, {10,1,1986}};
   printf("success\n");
}