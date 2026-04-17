#include <stdio.h>

int main() {
    int num = 12234;
    int digit = 2;
    int count = 0;

    while(num > 0) {
        if(num % 10 == digit) {
            count++;
        }
        num = num / 10;
    }

    printf("Count = %d", count);
    return 0;
}