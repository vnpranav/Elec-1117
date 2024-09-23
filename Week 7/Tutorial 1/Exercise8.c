#include <stdio.h>

#define PERSONS 5

void main(void){
   float grossSales[PERSONS] = {200.0, 3000.0, 1500.0, 1450.0, 800.0}, totalPay[PERSONS];
   int salaryRanges[9] = {0,0,0,0,0,0,0,0,0};
   int salary;
   const float comission = 0.09;

   for (int i = 0 ; i < PERSONS ; i++){
      totalPay[i] = 200.0 + comission * grossSales[i];
   }

   for(int i = 0; i < 10; i++){
     salary = (int) totalPay[i];

      if (salary >= 200 && salary < 300) {
            salaryRanges[0]++;
        } else if (salary >= 300 && salary < 400) {
            salaryRanges[1]++;
        } else if (salary >= 400 && salary < 500) {
            salaryRanges[2]++;
        } else if (salary >= 500 && salary < 600) {
            salaryRanges[3]++;
        } else if (salary >= 600 && salary < 700) {
            salaryRanges[4]++;
        } else if (salary >= 700 && salary < 800) {
            salaryRanges[5]++;
        } else if (salary >= 800 && salary < 900) {
            salaryRanges[6]++;
        } else if (salary >= 900 && salary < 1000) {
            salaryRanges[7]++;
        } else if (salary >= 1000) {
            salaryRanges[8]++;
        }
   }

    printf("\nNumber of salespeople earning in each salary range:\n");
    printf("$200–299: %d\n", salaryRanges[0]);
    printf("$300–399: %d\n", salaryRanges[1]);
    printf("$400–499: %d\n", salaryRanges[2]);
    printf("$500–599: %d\n", salaryRanges[3]);
    printf("$600–699: %d\n", salaryRanges[4]);
    printf("$700–799: %d\n", salaryRanges[5]);
    printf("$800–899: %d\n", salaryRanges[6]);
    printf("$900–999: %d\n", salaryRanges[7]);
    printf("$1000 and over: %d\n", salaryRanges[8]);
}

