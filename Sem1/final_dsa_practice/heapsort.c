#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // max heap creation
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        int j = i;
        while (j > 0)
        {
            if (arr[j] > arr[(j - 1) / 2])
            {
                int temp = arr[j];
                arr[j] = arr[(j - 1) / 2];
                arr[(j - 1) / 2] = temp;
                j = (j - 1) / 2;
            }
            else
            {
                break;
            }
        }
        printf("Max Heap after inserting %d: ", arr[i]);
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    // heap sort
    for (int i = 0; i < n; i++)
    {
        int end = n - 1 - i;
        int temp = arr[0];
        arr[0] = arr[end];
        arr[end] = temp;
        int j = 0;
        while (1)
        {
            int left = 2 * j + 1;
            int right = 2 * j + 2;
            int largest = j;
            if (arr[left] > arr[largest] && left < end)
            {
                largest = left;
            }
            if (arr[right] > arr[largest] && right < end)
            {
                largest = right;
            }
            if(largest == j)
            {
                break;
            }
            // swaping of the parent with the bigger child
            int temp = arr[j];
            arr[j] = arr[largest];
            arr[largest] = temp;
            j = largest;
        }
    }
    printf("Final array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}