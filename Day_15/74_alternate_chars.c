#include <stdio.h>

int main() {
    char str[] = "HELLO";

    for(int i = 0; str[i] != '\0'; i = i + 2) {
        printf("%c ", str[i]);
    }

    return 0;
}