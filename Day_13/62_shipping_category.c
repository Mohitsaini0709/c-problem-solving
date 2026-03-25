#include <stdio.h>

int main() {
    float weight;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    if (weight < 1.0) {
        printf("Light\n");
    } else if (weight >= 1.0 && weight < 5.0) {
        printf("Medium\n");
    } else {
        printf("Heavy\n");
    }

    return 0;
}