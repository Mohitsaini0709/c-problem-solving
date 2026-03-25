#include <stdio.h>

int main() {
    float p, r, t, si;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100.0;

    printf("SI = %.2f\n", si);

    return 0;
}