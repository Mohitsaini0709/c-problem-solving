#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(a > b)
        printf("A is greater");
    else
        printf("B is greater");

    return 0;
}