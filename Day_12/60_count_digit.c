#include <stdio.h>

int main() {
    int num, digit, temp, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter digit (0-9): ");
    scanf("%d", &digit);

    temp = num;  // we use temp so original num stays

    while (temp > 0) {
        if (temp % 10 == digit) {
            count++;
        }
        temp = temp / 10;
    }

    printf("Digit %d appears %d times\n", digit, count);

    return 0;
}