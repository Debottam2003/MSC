#include <stdio.h>
int visited[100] = {0};
int no = 1;
int dfsNo[30] = {0};
int top = -1;
int stack[30];
void push(int data){
    stack[++top] = data;
}
int pop(){
    if(top == -1){
        return 0;
    }
    int data = stack[top];
    --top;
    return data;
}
void dfs(int graph[30][30], int n, int src){
    if(visited[src] == 1){
        return;
    }
    visited[src] = 1;
    printf("%2d[%d] -> ", src, no);
    no++;
    for(int i = 0; i < n; i++){
        if(visited[i] == 0 && graph[src][i] == 1){
            dfs(graph, n, i);
        }
    }
    push(src);
}
int main()
{
    int n, e, u, v;
    printf("\nEnter the number of vertices in the graph: ");
    scanf("%d", &n);
    int graph[30][30];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }
    printf("\nEnter the number of edges: ");
    scanf("%d", &e);
    for (int i = 0; i < e; i++)
    {
        printf("\nEnter the end vertices of edge %d: ", i + 1);
        scanf("%d%d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    printf("\nThe adjacency matrix of the graph is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            dfs(graph, n, i);
        }
    }
    printf("END");
    while(top > -1){
        printf("%2d", stack[top]);
        top--;
    }
    return 0;
}