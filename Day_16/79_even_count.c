#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 4, 7, 8};
    int count = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("Even = %d", count);
    return 0;
}