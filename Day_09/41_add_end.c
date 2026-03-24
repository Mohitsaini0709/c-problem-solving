#include <stdio.h>
int main() {
    int a[5] = {1,2,3};
    a[3] = 5;

    printf("%d %d %d %d", a[0],a[1],a[2],a[3]);
}