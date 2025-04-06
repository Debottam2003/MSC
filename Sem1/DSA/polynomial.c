#include <stdio.h>
#include<math.h>
// addition function
void add(int a[], int b[]){
     int i;
     int c[10];
     for(i = 0; i < 4; i++){
        c[i] = a[i] + b[i];
     }
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", c[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    printf("\n");    
}
// difference function
void sub(int a[], int b[]){
     int i;
     int c[10];
     for(i = 0; i < 4; i++){
        c[i] = a[i] - b[i];
     }
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", c[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    printf("\n");  
}
// multiplication function
void multiply(int a[], int b[]){
     int i,j;
     int c[7] = {0};
     for(i = 0; i < 4; i++){
        for(j =0; j < 4; j++){
        c[i + j] += b[j] * a[i];
        }
     }
    for (i = 0; i < 7; i++) {
        printf("%dx^%d", c[i], i);
        if (i < 6) {
            printf(" + ");
        }
    }
    printf("\n"); 
}
//evaluate function
void evaluate(int a[],int val){
    int res = 0,i;
    for(i = 0; i < 4; i++){
        res += pow(2,i) * a[i];
    }
    printf("f(%d): %d",val,res);
}
void derivative(int a[]){
    int c[4] = {0},i;
    for(i = 0; i < 4; i++){
        c[i] = a[i + 1] * (i + 1);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("%dx^%d", c[i], i);
        if (i < 2) {
            printf(" + ");
        }
    }
}
int main() {
    //polynomial creation
    int a[10] = {1, 2, 3, 1}, b[10] = {2, 3, 4, 2};
    int i;
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", a[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", b[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    //function calls
    printf("\n");
    add(a,b);
    sub(a,b);
    multiply(a,b);
    evaluate(a,2);
    derivative(a);
    return 0;
}
