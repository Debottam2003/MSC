#include <stdio.h>
int main()
{
    int arr[9] = {6, 4, 1, 9, 5, 8, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 5;
    int gap = 2;
    while (start > 1)
    {
        for (int i = 0; i < start; i++)
        {
            for (int j = i + start; j < size; j = j + start)
            {
                int k = j - start;
                int temp = arr[j];
                while (k >= i && arr[k] > temp)
                {
                    arr[k + start] = arr[k];
                    k -= start;
                }
                arr[k + start] = temp;
            }
        }
        start -= gap;
        printf("\n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    int i, j, temp;
    for (i = 1; i < 9; i++)
    {
        j = i - 1;
        temp = arr[i];
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}