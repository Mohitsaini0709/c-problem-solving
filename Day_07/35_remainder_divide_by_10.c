#include <stdio.h>

int main()
{
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    rem = num % 10;

    printf("Remainder = %d", rem);

    return 0;
}