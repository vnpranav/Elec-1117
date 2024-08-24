#include <stdio.h>

void main(void){
   float price;
   int prod_num, option, loop, prod_amt;

   price = 0.0;
   loop = 1;

   while (loop) {
      printf("1. Add product\n");
      printf("0. Exit\n\n");
      printf("Enter an option: ");
      scanf("%d", &option);
      switch (option) {
         case 0:
            loop = 0;
            break;
         case 1:
            printf("Product Number \t Retail Price\n");
            printf("----------------\t------------\n");
            printf("1 \t\t\t$ 2.98\n");
            printf("2 \t\t\t$ 4.50\n");
            printf("3 \t\t\t$ 9.98\n");
            printf("4 \t\t\t$ 4.49\n");
            printf("5 \t\t\t$ 6.87\n\n");
            
            printf("Enter the product number and amt sold: ");
            scanf("%d %d", &prod_num, &prod_amt);
            
            switch(prod_num){
               case 1:
                  price = price + 2.98 * prod_amt;
                  break;
               case 2:
                  price = price + 4.50 * prod_amt;
                  break;
               case 3:
                  price = price + 9.98 * prod_amt;
                  break;
               case 4:
                  price = price + 4.49 * prod_amt;
                  break;
               case 5:
                  price = price + 6.87 * prod_amt;
                  break;
            }
            printf("Product Added\n");
            printf("Current total: $%.2f\n\n", price);
      }
   }

   printf("Total Retail Value: $ %.2f", price);
}
