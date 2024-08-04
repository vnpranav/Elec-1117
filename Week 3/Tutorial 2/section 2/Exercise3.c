#include <stdio.h>

void main(void){
   float celcius, farhenheit;
   farhenheit = 98.6;
   celcius = (farhenheit - 32.0) * 5/9;
   printf("The temperature in celcius is %f\n", celcius);
}