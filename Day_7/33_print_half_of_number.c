#include <stdio.h>

int main()
{
    float num, half;

    printf("Enter a number: ");
    scanf("%f", &num);

    half = num / 2;

    printf("Half = %.2f", half);

    return 0;
}