#include <stdio.h>
#include <stdlib.h>

// Structure for holding array and its size
struct dynamic_array
{
    int *arr;
    int size;
};

// Function to insert initial elements into the array
void insert(struct dynamic_array *d_arr)
{
    d_arr->arr = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 elements
    d_arr->size = 5;

    for (int i = 0; i < d_arr->size; i++)
    {
        d_arr->arr[i] = i + 1; // Insert elements 1 to 5
        printf("%4d", d_arr->arr[i]);
    }
    printf("\n");
}

// Function to push an element into the array
void push(struct dynamic_array *d_arr, int element)
{
    // Increase size
    d_arr->size++;

    // Reallocate memory for the new element
    d_arr->arr = (int *)realloc(d_arr->arr, d_arr->size * sizeof(int));

    // Add the new element at the end
    d_arr->arr[d_arr->size - 1] = element;

    // Print the updated array
    printf("\nUpdated array: ");
    for (int i = 0; i < d_arr->size; i++)
    {
        printf("%4d", d_arr->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct dynamic_array d_arr; // Dynamic array structure
    insert(&d_arr);             // Insert initial elements
    push(&d_arr, 12);           // Push a new element
    free(d_arr.arr);            // Free the allocated memory
    return 0;
}
