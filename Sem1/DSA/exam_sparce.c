#include <stdio.h>
int main()
{
    int row, column, i, j, temp;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("Enter the number of columns:");
    scanf("%d", &column);
    int matrix[row][column];
    printf("Enter the elements:\n");
    // Matrix input
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Matrix output
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    int element_count = row * column;
    int non_zero = 0;
    // Sprace Matrix Checking
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (matrix[i][j] != 0)
            {
                non_zero++;
            }
        }
    }
    int sm[non_zero + 1][3], index = 0;
    sm[index][0] = row;
    sm[index][1] = column;
    sm[index][2] = non_zero;
    index++;
    if (non_zero <= (element_count / 3))
    {
        printf("This is a Sparce Matrix\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (matrix[i][j] != 0)
                {
                    sm[index][0] = i;
                    sm[index][1] = j;
                    sm[index][2] = matrix[i][j];
                    index++;
                }
            }
        }
        for (i = 0; i < non_zero + 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%4d", sm[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This is Not a Sparce Matrix");
    }
    for (i = 0; i < (non_zero + 1); i++)
    {
        temp = sm[i][0];
        sm[i][0] = sm[i][1];
        sm[i][1] = temp;
    }
    printf("This is a Transpose of the Sparce Matrix\n");
    for (i = 0; i < non_zero + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%4d", sm[i][j]);
        }
        printf("\n");
    }
}
