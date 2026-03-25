#include <stdio.h>

int main() {
    float price;

    printf("Enter ticket price: ");
    scanf("%f", &price);

    if (price < 500) {
        printf("Cheap\n");
    } else if (price >= 500 && price < 1000) {
        printf("Medium\n");
    } else {
        printf("Expensive\n");
    }

    return 0;
}