// assignment 1
#include <stdio.h>
int main()
{
    int n, i, j, x;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of vertices.\n");
        return 1;
    }
    int adj[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            adj[i][j] = 0; // Initialize the adjacency matrix to 0
        }
    }
    int edges;
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &edges);
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
        for (i = 0; i < edges; i++)
        {
            int u, v;
            printf("Enter the vertices of edge %d: ", i + 1);
            scanf("%d %d", &u, &v);
            adj[u][v] = 1; // Set the edge in the adjacency matrix
            adj[v][u] = 1; // For undirected graph, set the reverse edge as well
        }
        break;
    case 2:
        for (i = 0; i < edges; i++)
        {
            int u, v, w;
            printf("Enter the vertices and weight of edge %d: ", i + 1);
            scanf("%d %d %d", &u, &v, &w);
            adj[u][v] = w; // Set the weight in the adjacency matrix
            adj[v][u] = w; // For undirected graph, set the reverse edge as well
        }
        break;
    case 3:
        for (i = 0; i < edges; i++)
        {
            int u, v;
            printf("Enter the vertices of edge %d: ", i + 1);
            scanf("%d %d", &u, &v);
            adj[u][v] = 1; // Set the edge in the adjacency matrix
        }
        break;
    case 4:
        for (i = 0; i < edges; i++)
        {
            int u, v, w;
            printf("Enter the vertices and weight of edge %d: ", i + 1);
            scanf("%d %d %d", &u, &v, &w);
            adj[u][v] = w; // Set the weight in the adjacency matrix
        }
        break;
    default:
        printf("Invalid choice\n");
        return 1; // Exit if the choice is invalid
    }
    printf("The adjacency matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d ", adj[i][j]); // Print the adjacency matrix
        }
        printf("\n");
    }
    return 0;
}