#include <stdio.h>
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
void multiply(int a[], int b[]){
     int i;
     int c[10];
     for(i = 0; i < 4; i++){
        c[i] = a[i] * b[i];
     }
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", c[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    printf("\n"); 
}
int main() {
    int a[10] = {1, 2, 3, 1}, b[10] = {2, 3, 4, 2};
    int i;

    // Print the first polynomial
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", a[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    printf("\n");

    // Print the second polynomial
    for (i = 0; i < 4; i++) {
        printf("%dx^%d", b[i], i);
        if (i < 3) {
            printf(" + ");
        }
    }
    printf("\n");
    add(a,b);
    sub(a,b);
    multiply(a,b);
    return 0;
}
