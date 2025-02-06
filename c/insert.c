#include <stdio.h>

int length(int arr[]) {
    int count = 0;
    while(arr[count] != 9999){
        count += 1;
    } 
    return count;
}

int main() {
    int arr[20] = {7, 8, 9, 2, 3, 5, 10, 13, 21, 9999};
    int size = sizeof(arr);
    arr[9] = 25;
    arr[10] = 9999;
    printf("%d", length(arr));
    return 0;
}