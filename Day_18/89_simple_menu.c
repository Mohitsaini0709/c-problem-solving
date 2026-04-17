#include <stdio.h>

int main() {
    int ch = 1;

    switch(ch) {
        case 1: printf("Login"); break;
        case 2: printf("Logout"); break;
        case 3: printf("Exit"); break;
        default: printf("Error");
    }

    return 0;
}