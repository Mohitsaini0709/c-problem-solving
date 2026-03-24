#include <stdio.h>
int main() {
    for(int i=1;i<=10;i++) {
        if(i==2 || i==8) continue;
        printf("%d ", i);
    }
}