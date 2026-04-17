#include <stdio.h>

int main() {
    int ch = 3;

    switch(ch) {
        case 1: printf("Play"); break;
        case 2: printf("Pause"); break;
        case 3: printf("Stop"); break;
        default: printf("Wrong");
    }

    return 0;
}