#include<stdio.h>
int main() {
    int n, m, i, e, j, k, temp;

    printf("Enter the no of elements: ");
    scanf("%d", &n);
    m = n;

    int tree[n];

    // Max heap creation
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &e);
        j = i;
        tree[i] = e;
        while (j > 0) {
            k = (j - 1) / 2;
            if (tree[j] > tree[k]) { // Maintain max-heap property
                temp = tree[j];
                tree[j] = tree[k];
                tree[k] = temp;
            }
            j = k;
        }
    }

    printf("The complete binary tree is: ");
    for (i = 0; i < n; i++) {
        printf("%4d", tree[i]);
    }

    // Heap sort
    for (i = 0; i < n; i++) {
        // Swap root with last element
        temp = tree[0];
        tree[0] = tree[n - i - 1];
        tree[n - i - 1] = temp;

        // Heapify the reduced heap
        j = 0;
        while (1) {
            int left = 2 * j + 1;
            int right = 2 * j + 2;
            int largest = j;

            if (left < n - i - 1 && tree[left] > tree[largest]) {
                largest = left;
            }
            if (right < n - i - 1 && tree[right] > tree[largest]) {
                largest = right;
            }
            if (largest != j) {
                temp = tree[j];
                tree[j] = tree[largest];
                tree[largest] = temp;
                j = largest;
            } else {
                break;
            }
        }
    }

    printf("\nThe heap sort result is: ");
    for (i = 0; i < n; i++) {
        printf("%4d", tree[i]);
    }

    return 0;
}
