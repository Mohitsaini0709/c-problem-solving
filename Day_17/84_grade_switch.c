#include <stdio.h>

int main() {
    char g = 'B';

    switch(g) {
        case 'A': printf("Top"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Avg"); break;
        default: printf("Fail");
    }

    return 0;
}