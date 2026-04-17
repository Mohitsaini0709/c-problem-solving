#include <stdio.h>

int main() {
    int n = -2;

    if(n < 0) {
        printf("Negative");
        return 1;
    }

    printf("Positive");
    return 0;
}