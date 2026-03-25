#include <stdio.h>

int main() {
    float speed;

    printf("Enter speed (km/h): ");
    scanf("%f", &speed);

    if (speed < 40.0) {
        printf("Slow\n");
    } else if (speed >= 40.0 && speed < 80.0) {
        printf("Normal\n");
    } else {
        printf("Fast\n");
    }

    return 0;
}