#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 15;

    if ((a > b && a < c) || (a > c && a < b))
        printf("Second = %d", a);
    else if ((b > a && b < c) || (b > c && b < a))
        printf("Second = %d", b);
    else
        printf("Second = %d", c);

    return 0;
}