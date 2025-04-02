#include <stdio.h>
int main()
{
    int n, i, j, k, temp, start, gap = 2;
    printf("Enter the no of elements in the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the Starting iteration no(>0) and less than %d: ", n);
    scanf("%d", &start);
    while (start > 1)
    {
        for (i = 0; i < start; i++)
        {
            for (j = i + start; j < n; j = j + start)
            {
                k = j - start;
                temp = arr[j];
                while (k >= i && arr[k] > temp)
                {
                    arr[k + start] = arr[k];
                    k -= start;
                }
                arr[k + start] = temp;
            }
        }
        printf("\nThe output array after sorting of gap %d:\n", start);
        for (i = 0; i < n; i++)
        {
            printf("%4d", arr[i]);
        }
        start -= gap;
    }
    for (i = 1; i < n; i++)
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
    printf("\nThe output array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
}
