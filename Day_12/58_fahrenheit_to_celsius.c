#include <stdio.h>

int main() {
    float f, c;

    printf("Enter Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5.0 / 9.0;

    printf("Celsius = %.2f\n", c);

    return 0;
}