#include <stdio.h>

int main() {
    float l, b, area, per;

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    area = l * b;
    per = 2 * (l + b);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", per);

    return 0;
}