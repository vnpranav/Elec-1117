#include <stdio.h>

float celsius(int fahrenheit) {
    return ((float)(fahrenheit - 32) * 5 / 9);
}

float fahrenheit(int celsius) {
    return ((float)(celsius * 9 / 5) + 32);
}

int main() {
    printf("Celsius\tFahrenheit\n");
    for (int c = 0; c <= 100; c++) {
        printf("%d\t%.2f\n", c, fahrenheit(c));
    }

    printf("\n");

    printf("Fahrenheit\tCelsius\n");
    for (int f = 32; f <= 212; f++) {
        printf("%d\t\t%.2f\n", f, celsius(f));
    }

    return 0;
}