#include <stdio.h>
#include <string.h>
void lcs(char a[], char b[], int m, int n)
{
    int matrix[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i > 0 && j > 0)
            {
                if (a[i - 1] == b[j - 1])
                {
                    matrix[i][j] = matrix[i - 1][j - 1] + 1;
                }
                else
                {
                    matrix[i][j] = matrix[i - 1][j] > matrix[i][j - 1] ? matrix[i - 1][j] : matrix[i][j - 1];
                }
            }
        }
    }
    int index = matrix[m][n];
    char result[index + 1];
    result[index] = '\0';
    int i = m, j = n;
    while(i > 0 && j > 0){
        if(a[i - 1] == b[j - 1]){
            result[--index] = a[i - 1];
            i--;
            j--;
        }
        else if (matrix[i - 1][j] >= matrix[i][j - 1]) {
            i--;  // Move up in the LCS matrix
        } else {
            j--;  // Move left in the LCS matrix
        }
        
    }
    printf("%s", result);
    printf("\nThis is the lcs matrix and the lcs is {'%s'} and the length of the lcs is %d:\n", result, matrix[m][n]);
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char a[100], b[100];
    printf("Enter the first string: ");
    scanf("%s", a);
    printf("Enter the first string: ");
    scanf("%s", b);
    // printf("%d", strlen(a));
    // printf("%s and %s", a, b);
    // printf("\n");
    // for(int i = 0; i < strlen(a); i++){
    //     printf("%c",a[i]);
    // }
    // printf("\n");
    // int i = 0;
    // while(a[i] != '\0'){
    //     printf("%c",a[i]);
    //     i++;
    // }
    lcs(a, b, strlen(a), strlen(b));
    return 0;
}