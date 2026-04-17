#include <stdio.h>

int main() {
    char ch = 'o';

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Not Vowel");
    }

    return 0;
}