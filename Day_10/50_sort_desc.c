#include <stdio.h>
int main() {
    int a[5]={5,3,1,4,2}, t;

    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(a[i]<a[j]) {
                t=a[i]; a[i]=a[j]; a[j]=t;
            }

    for(int i=0;i<5;i++)
        printf("%d ", a[i]);
}