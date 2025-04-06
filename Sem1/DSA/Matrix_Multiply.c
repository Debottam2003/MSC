//Generalized Matrix Multiplication
#include <stdio.h>

int main()
{
    int m, n, p, q;

    // Taking the dimension of the matrices
    printf("Enter the number of rows of matrix A:\n");
    scanf("%d", &m);

    printf("Enter the number of columns of matrix A:\n");
    scanf("%d", &n);

    printf("Enter the number of rows of matrix B:\n");
    scanf("%d", &p);
    
    printf("Enter the number of columns of matrix B:\n");
    scanf("%d", &q);

    // Checking the matrix multiplication validation
    if (n == p)
    {
        int matrixA[m][n];
        int matrixB[p][q];
        int matrixC[m][q];
        int i, j, k;

        // Initializing the result matrix with zeros
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                matrixC[i][j] = 0;
            }
        }

        // Taking input of matrix A from the console
        printf("Enter the matrix A:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &matrixA[i][j]);
            }
        }

        // Taking input of matrix B from the console
        printf("Enter the matrix B:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &matrixB[i][j]);
            }
        }

        // Showing matrix A in the console
        printf("This is the matrix A:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%4d", matrixA[i][j]);
            }
            printf("\n");
        }

        // Showing matrix B in the console
        printf("This is the matrix B:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%4d", matrixB[i][j]);
            }
            printf("\n");
        }

        // Main matrix multiplication logic
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                for (k = 0; k < n; k++)
                {
                    matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }

        // Showing the resultant matrix in the console
        printf("This is the matrix multiplication result:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%4d", matrixC[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        // Breaking out from the Matrix Multiplication code
        printf("\nThe matrix multiplication is not possible...\n");
    }

    return 0;
}