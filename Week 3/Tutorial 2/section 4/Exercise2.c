#include <stdio.h>

void main(void){
   float fahrenheit, celcius;
   printf("Enter the temperature in degrees Fahrenheit: ");
   scanf("%f", &fahrenheit);
   celcius = (fahrenheit - 32) * 5.0 / 9;
   printf("The temperature in degrees Celsius is: %f\n", celcius);
}