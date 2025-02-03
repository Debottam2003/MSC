#include <stdio.h>
#include <string.h>
struct stud
{
    char name[50];
    int age;
} s1, s2, s3;
int main()
{
    strcpy(s1.name, "Debottam Kar");
    s1.age = 22;
    strcpy(s2.name, "Alice Smith");
    s2.age = 20;
    strcpy(s3.name, "Bob Johnson");
    s3.age = 30;
    printf("%d\n", s1.age);
    int i, j;
    struct stud temp;
    for (i = 0; i < sizeof(s1.name) / sizeof(s1.name[0]); i++)
    {
        printf("%c", s1.name[i]);
    }
    struct stud arr[3];
    arr[0] = s1;
    arr[1] = s2;
    arr[2] = s3;
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < sizeof(arr[i].name) / sizeof(arr[i].name[0]); j++)
        {
            printf("%c", arr[i].name[j]);
        }
        printf("\nage: %d", arr[i].age);
    }
    for (i = 0; i < 3 - 1; i++)
    {
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < sizeof(arr[i].name) / sizeof(arr[i].name[0]); j++)
        {
            printf("%c", arr[i].name[j]);
        }
        printf("\nage: %d", arr[i].age);
    }
    return 0;
}