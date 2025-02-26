#include<stdio.h>
#include<string.h>
void lcs(char a[], char b[], int m,  int n)
{
    int l[m + 1][n + 1];
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i ==0 || j == 0){
                l[i][j] = 0;
            }
            else{
                if(a[i - 1] == b[j - 1]){
                    l[i][j] = l[i - 1][j - 1] + 1;
                }
                else{
                    l[i][j] = l[i - 1][j] > l[i][j - 1] ? l[i - 1][j] : l[i][j - 1];
                }
            }
        }
    }
    for (int i = 0; i <= m; i++)
    {
        for(int j = 0; j <= n; j++){
            printf("%4d ", l[i][j]);
        }
        printf("\n");
    }
    int index = l[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';
    int i = m, j = n;
    while(i > 0 && j > 0){
         if(a[i - 1] == b[j - 1]){
            lcs[--index] = a[i - 1];
            i--;
            j--;
         }
         else if(l[i - 1][j] > l[i][j - 1]){
             i--;
         }
         else{
             j--;
         }
    }
    printf("\nThe longest common subsequence is: %s", lcs);
    
}
int main(){
    char a[100], b[100];
    printf("Enter the first string: ");
    scanf("%s", a);
    printf("Enter the second string: ");
    scanf("%s", b);
    lcs(a, b, strlen(a),  strlen(b));
    return 0;
}