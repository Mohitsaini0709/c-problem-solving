#include <stdio.h>

int main() {
    int arr[5] = {2, 8, 5, 1, 9};
    int max = arr[0];

    for(int i = 0; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest = %d", max);
    return 0;
}