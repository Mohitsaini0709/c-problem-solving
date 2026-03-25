#include <stdio.h>

int main() {
    int battery;

    printf("Enter battery level (0-100): ");
    scanf("%d", &battery);

    if (battery < 20) {
        printf("Low\n");
    } else if (battery >= 20 && battery < 80) {
        printf("Medium\n");
    } else {
        printf("Full\n");
    }

    return 0;
}