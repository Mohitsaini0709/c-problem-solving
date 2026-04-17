#include <stdio.h>

int main() {
    int num = 6;
    int sum = 0;

    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == num)
        printf("Perfect Number");
    else
        printf("Not Perfect");

    return 0;
}