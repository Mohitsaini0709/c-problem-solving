#include <stdio.h>

int main() {
    int marks = 20;

    if(marks < 33) {
        printf("Fail");
        return 1;
    }

    printf("Pass");
    return 0;
}