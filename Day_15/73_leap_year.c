#include <stdio.h>

int main() {
    int year = 2024;

    if(year % 4 == 0)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}