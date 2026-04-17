#include <stdio.h>

int main() {
    int n = 6;

    if(n % 2 == 0) {
        printf("Even");
        return 1;
    }

    printf("Odd");
    return 0;
}