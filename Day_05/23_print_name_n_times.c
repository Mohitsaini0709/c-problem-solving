#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter how many times to print name: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Mohit\n");
    }

    return 0;
}