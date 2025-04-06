#include <stdio.h>
// #include <stdlib.h>
// int* add(int* a, int* b) {
//     int* c = (int*)malloc(sizeof(int));
//     *c = *a + *b;
//     return c;
// }
// int main() {
//     printf("Hello, World!\n");
//     int a = 5, b = 10;
//     int* res = add(&a, &b);
//     printf("Sum: %d\n", *res);
//     free(res); // Free the allocated memory
//     int arr[] = {6, 4, 1, 9, 5, 8, 3, 7, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(arr[j] > arr[j + 1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for(int i = 0; i < n; i++){
//         printf("%2d", arr[i]);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main() {
//     // time_t t;
//     // time(&t);
//     // printf("Current time: %s", ctime(&t));
//     srand(time(0));
//     int number = rand();
//     printf("%d and current time is : %d", number, time(0));
//     return 0;
// }
void printMatrix(int n, int arr[n][n])
{
    // Print the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // int n = 5; // Example size of the matrix
    // int arr[n][n];

    // // Initialize the matrix with some values
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j] = 1;
    //     }
    // }
    // printMatrix(n, arr);
    int num = 123;
    num = num >> 1;
    printf("%d", num);
}
