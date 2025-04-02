#include <stdio.h>
void add(int a[], int b[], int c[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
    {
        c[i] = a[i] + b[i];
    }
}
void sub(int a[], int b[], int c[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
    {
        c[i] = a[i] - b[i];
    }
}
void multiply(int a[], int b[], int c[], int n, int m)
{
    for (int i = 0; i <= n * m; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            c[i + j] += a[i] * b[j];
        }
    }
}
void differentiate(int a[], int c[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (i > 0)
        {
            c[i - 1] = a[i] * i;
        }
    }
}
void display(int c[], int size)
{
    int i;
    for (i = 0; i <= size; i++)
    {
        printf("%2dx^%d + ", c[i], i);
    }
    printf("\n");
}
int main()
{
    int a[100] = {0}, b[100] = {0}, n, m, c[100] = {0};
    printf("Enter the degree of first polynomial: ");
    scanf("%d", &n);
    printf("Enter the coefficients of first polynomial: ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the degree of second polynomial: ");
    scanf("%d", &m);
    printf("Enter the coefficients of second polynomial: ");
    for (int i = 0; i <= m; i++)
    {
        scanf("%d", &b[i]);
    }
    int size_of_the_result = n > m ? n : m;

    add(a, b, c, size_of_the_result);
    printf("Sum of the polynomials: ");
    display(c, size_of_the_result);

    sub(a, b, c, size_of_the_result);
    printf("Difference of the polynomials: ");
    display(c, size_of_the_result);

    multiply(a, b, c, n, m);
    printf("Product of the polynomials: ");
    display(c, n + m);

    differentiate(a, c, size_of_the_result);
    printf("Differentiation of the first polynomial: ");
    display(c, size_of_the_result - 1);

    return 0;
}