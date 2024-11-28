#include<stdio.h>
int main(){
    int a[10] = {1,2,3,1}, b[10] = {2,3,4,2};
    int i;
    for(i = 0; i < 4; i++){
        printf("%dx^%d + ",a[i],i);
    }
}