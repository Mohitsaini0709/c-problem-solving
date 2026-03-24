#include <stdio.h>
int main() {
    int a[5] = {1,2,3};

    a[0]=a[1];
    a[1]=a[2];

    printf("%d %d", a[0],a[1]);
}