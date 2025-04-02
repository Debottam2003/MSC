// assignment 2
#include<stdio.h>
int main(){
    int v, e, i, j, x;
    printf("Enter the number of vertices in the graph: "); 
    scanf("%d", &v);
    printf("Enter the number of edges in the grpah: ");
    scanf("%d", &e);
    int incidenceMatrix[v][e];
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < e; j++)
        {
            incidenceMatrix[i][j] = 0; // Initialize the adjacency matrix to 0
        }
    }
    printf("1.Undriected Unweighted Graph\n");
    printf("2.Undirected Weighted Graph\n");
    printf("3.Directed Unweighted Graph\n");
    printf("4.Directed Weighted Graph\n");
    printf("Enter the type of graph: ");
    // Prompt the user to enter the type of graph
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        for (i = 0; i < e; i++)
        {
            int u, v;
            printf("Enter the vertices of edge %d: ", i + 1);
            scanf("%d %d", &u, &v);
            incidenceMatrix[u][i] = 1; // Set the edge in the adjacency matrix
            incidenceMatrix[v][i] = 1; // For undirected graph, set the reverse edge as well
        }
        break;
    case 2:
        for (i = 0; i < e; i++)
        {
            int u, v, w;
            printf("Enter the vertices and weight of edge %d: ", i + 1);
            scanf("%d %d %d", &u, &v, &w);
            incidenceMatrix[u][i] = w; // Set the weight in the adjacency matrix
            incidenceMatrix[v][i] = w; // For undirected graph, set the reverse edge as well
        }
        break;
    case 3:
        for (i = 0; i < e; i++)
        {
            int u, v;
            printf("Enter the vertices of edge %d: ", i + 1);
            scanf("%d %d", &u, &v);
            incidenceMatrix[u][i] = 1; // Set the edge in the adjacency matrix
            incidenceMatrix[v][i] = -1;
        }
        break;
    case 4:
        for (i = 0; i < e; i++)
        {
            int u, v, w;
            printf("Enter the vertices and weight of edge %d: ", i + 1);
            scanf("%d %d %d", &u, &v, &w);
            incidenceMatrix[u][i] = w; // Set the weight in the adjacency matrix
            incidenceMatrix[v][i] = -w;
        }
        break;
    default:
        printf("Invalid choice\n");
        return 1; // Exit if the choice is invalid
    }
    printf("The adjacency matrix is:\n");
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < e; j++)
        {
            printf("%4d ", incidenceMatrix[i][j]); // Print the adjacency matrix
        }
        printf("\n");
    }
    return 0;
}