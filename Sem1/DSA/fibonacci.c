#include <stdio.h>
int memory[100] = {0};
int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    if (memory[n] != 0)
    {
        return memory[n];
    }
    memory[n] = fibo(n - 1) + fibo(n - 2);
    return memory[n];
}
int main()
{
    int element = fibo(5);
    printf("%d", element);
    // int a = 0, b = 1, nextterm, n;
    // printf("Enter the upper limit >= 1:\n");
    // scanf("%d", &n);
    // if (n == 1)
    // {
    //     printf("%d", a);
    // }
    // else if (n == 2)
    // {
    //     printf("%2d%2d", a, b);
    // }
    // else if(n > 2)
    // {
    //     printf("%4d%4d", a, b);
    //     for (int i = 3; i <= n; i++)
    //     {
    //         nextterm = a + b;
    //         a = b;
    //         b = nextterm;
    //         printf("%4d", nextterm);
    //     }
    // }
}