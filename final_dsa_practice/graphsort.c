#include <stdio.h>
int main()
{
    int v, e;
    printf("Enter the number of elements: ");
    scanf("%d", &v);
    int elements[v];
    for (int i = 0; i < v; i++)
    {
        printf("Enter the elements: ");
        scanf("%d", &elements[i]);
    }
    int graph[v][v], i, j, arr[v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i < j && elements[i] <= elements[j])
            {
                graph[i][j] = 1;
            }
            else
            {
                graph[i][j] = 0;
            }
        }
    }
    printf("\n");
    printf("RKPian GrpahSort: \n");
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                printf("%d ", graph[i][j]);
            }
            printf("\n");
        }
        int source = -1;
        for (int i = 0; i < v; i++)
        {
            int flag = 0;
            for (int j = 0; j < v; j++)
            {
                if (graph[j][i] != 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                if (i > source)
                {
                    source = i;
                }
            }
        }
        arr[k] = elements[source];
        printf("%d \n", elements[source]);
        for (int j = 0; j < v; j++)
        {
            if (graph[source][j] == 1)
            {
                graph[source][j] = 0;
            }
            graph[j][source] = -1;
        }
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < v; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}