#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int same_swaps = 0, different_swaps = 0, comparisons = 0;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int random_index = low + rand() % ((high - low) + 1);
    if (random_index != high) {
        swap(&arr[random_index], &arr[high]);
        different_swaps++;  // Count the pivot swap
    }
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        comparisons++;
        if (arr[j] < pivot)
        {
            i++;
            if (i != j)
            { // Only count when a swap actually occurs
                swap(&arr[i], &arr[j]);
                different_swaps++;
            }
            else
            {
                same_swaps++;
            }
        }
    }
    i++;
    if (i != high)
    { // Only swap pivot if needed
        swap(&arr[i], &arr[high]);
        different_swaps++;
    }
    return i;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}
int main()
{
    // Just randomized the pivot element
    srand(time(0));
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("\nThe array elements are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\nTotal no of same_swaps: %d, different_swaps: %d and comparisons: %d", same_swaps, different_swaps, comparisons);
    return 0;
}