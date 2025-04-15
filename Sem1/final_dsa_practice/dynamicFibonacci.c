#include <stdio.h>
long long int memory[100] = {0}; // Array to store Fibonacci numbers
long long int fibonacci(int n)
{
    if (n <= 1) return n;
    if(memory[n] != 0) return memory[n]; // Check if already computed
    memory[n] = fibonacci(n - 1) + fibonacci(n - 2); // Store the result in memory
    return memory[n]; // Return the result
}
int main()
{
    int n;
    printf("Enter the number of terms you want: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%4lld ", fibonacci(i));
    }
    return 0;
}