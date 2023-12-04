#include <stdio.h>

float fahrenheitToCelsius(int fahrenheit);

int main() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, fahrenheitToCelsius(fahr));
    }
    return 0;
}

float fahrenheitToCelsius(int fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}