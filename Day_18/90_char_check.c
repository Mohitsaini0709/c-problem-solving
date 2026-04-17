#include <stdio.h>

int main() {
    char ch = 'B';

    switch(ch) {
        case 'A': printf("Apple"); break;
        case 'B': printf("Ball"); break;
        case 'C': printf("Cat"); break;
        default: printf("Other");
    }

    return 0;
}