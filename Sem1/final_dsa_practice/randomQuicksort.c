#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comparisons = 0;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int getPivot(int arr[], int l, int u){
    int pivot = l + rand() % (u - l + 1);
    if(pivot != u){
        swap(&arr[pivot], &arr[u]);
    }
    int i = l - 1;
    for(int j = l; j < u; j++){
        comparisons++;
        if(arr[j] < arr[u] && i != j){
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    i++;
    if(i != u){
    swap(&arr[i], &arr[u]);
    }
    return i;
}
void quicksort(int arr[], int l, int u){
    if(l < u){
       int pivot = getPivot(arr, l, u);
       quicksort(arr, l, pivot - 1);
       quicksort(arr, pivot + 1, u);
    }
}
int main() {
    srand(time(0));
    int n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements: ");
    for(int i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements of the array: ");
    for(int i = 0 ; i < n; i++){
        printf("%2d", arr[i]);
    }
    int l = 0;
    int u = n - 1;
    quicksort(arr, l, u);
    printf("\nThe sorted sequence of the elements of the array: ");
    for(int i = 0 ; i < n; i++){
        printf("%2d", arr[i]);
    }
    printf("No of comparions: %d", comparisons);
    return 0;
}