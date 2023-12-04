#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("\n\ncelsius to fahrenheit:\n\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
    return 0;
}