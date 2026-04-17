#include <stdio.h>

int main() {
    int a = 8, b = 2;
    char op = '+';

    switch(op) {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
        case '*': printf("%d", a*b); break;
        case '/': printf("%d", a/b); break;
    }

    return 0;
}