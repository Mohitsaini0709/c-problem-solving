#include <stdio.h>

int main() {
    int n = 7;

    switch(n % 2) {
        case 0: printf("Even"); break;
        case 1: printf("Odd"); break;
    }

    return 0;
}