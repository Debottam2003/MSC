// [ matrix ] (base pointer)
//    |
//    |-- matrix[0] → [  a00 | a01 | a02 | a03 | a04 ]  (20 bytes)
//    |-- matrix[1] → [  a10 | a11 | a12 | a13 | a14 ]  (20 bytes)
//    |-- matrix[2] → [  a20 | a21 | a22 | a23 | a24 ]  (20 bytes)

// Total heap memory: 24 (pointer array) + 60 (row data) = 84 bytes
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for array of row pointers
    int** matrix = (int**)malloc(rows * sizeof(int*));

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Input elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
