#include <stdio.h>

int main() {
    float data;

    printf("Enter data usage (GB): ");
    scanf("%f", &data);

    if (data < 1.0) {
        printf("Low\n");
    } else if (data >= 1.0 && data < 5.0) {
        printf("Medium\n");
    } else {
        printf("High\n");
    }

    return 0;
}
