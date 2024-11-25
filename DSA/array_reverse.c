#include<stdio.h>
int main(){
    int a[] = {7,8,9,2,3,5,10,13,21};
    int i;
    int n = sizeof(a) / sizeof(a[0]);
    for(i = 0; i < n / 2; i++){
        a[i] = a[i] + a[n - i - 1];
        a[n - i - 1] = a[i] - a[n - i - 1];
        a[i] = a[i] - a[n - i - 1];
    }
    for(i = 0; i < n; i++){
        printf("%4d",a[i]);
    }
}