#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d ", 2 * i);
        i++;
    } while(i <= 5);

    return 0;
}