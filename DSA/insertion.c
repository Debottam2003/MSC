#include <stdio.h>

int main() {
    // Your code here
    int arr[] = {7, 8, 9, 2, 3, 5};
    int i, j, temp;
    for(i = 1; i < 6; i++){
        j = i - 1;
        temp = arr[i];
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; 
    }
    for(i = 0; i < 6; i++) {
        printf("%4d ", arr[i]);
    }
    return 0;
}