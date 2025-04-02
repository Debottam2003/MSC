#include <stdio.h>
#include <math.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int matrix[][3], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n, m, count = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);
    int matrix[n][m];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // printf("Enter the element at (%d %d): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    display(matrix, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                count++;
            }
        }
    }
    // printf("%d", count);
    // printf("\n");
    if (count <= (n * m) / 3)
    {
        printf("The matrix is sparse matrix with %d non zero elements.\n", count);
        int sparse[count + 1][3];
        sparse[0][0] = n;
        sparse[0][1] = m;
        sparse[0][2] = count;
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                sparse[i + 1][j] = 0;
            }
        }
        int index = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] != 0)
                {
                    sparse[index][0] = i;
                    sparse[index][1] = j;
                    sparse[index][2] = matrix[i][j];
                    index++;
                }
            }
        }
        printf("The sparse representation of the matrix is: \n");
        display(sparse, count + 1, 3);
        printf("The sparse representation of the transpose of the matrix is: \n");
        for (int i = 0; i < count + 1; i++)
        {
            int temp = sparse[i][0];
            sparse[i][0] = sparse[i][1];
            sparse[i][1] = temp;
        }
        display(sparse, count + 1, 3);
        printf("The sparse representation of the transpose of the matrix is: \n");
        for (int i = 1; i < count; i++)
        {
            for (int j = 1; j < count; j++)
            {
                if (sparse[j][0] > sparse[j + 1][0] || sparse[j][0] == sparse[j + 1][0] && sparse[j][1] > sparse[j + 1][1])
                {
                    swap(&sparse[j][0], &sparse[j + 1][0]);
                    swap(&sparse[j][1], &sparse[j + 1][1]);
                    swap(&sparse[j][2], &sparse[j + 1][2]);
                }
            }
        }
        display(sparse, count + 1, 3);
    }
    else
    {
        printf("The matrix is not sparse matrix %d non zero elements.\n", count);
    }
    return 0;
}