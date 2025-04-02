#include <stdio.h>
int queue[100];
int front = -1;
int rear = -1;
void enqueue(int data){
    if(rear == 100){
        printf("Queuse is full.");
    }
    else{
        queue[++rear] = data;
        if(front == -1){
            front++;
        }
    }
}
int isempty(){
    if(front == -1 || front > rear){
        front = rear = -1;
        return 1;
    }
    return 0;
}
int dequeue(){
    if(isempty() == 1){
        return -1;
    }
    int item = queue[front];
    front++;
    if(front > rear){
        front = rear = -1;
    }
    return item;
}
int main() {
    int n, e, u, v;
    printf("\nEnter the number of vertices in the graph: ");
    scanf("%d", &n);
    int graph[n][n];
    int visited[n];
    int parent[n];
    for(int i = 0; i < n; i++){
        visited[i] = 0;
        parent[i] = -1;
        for(int j = 0; j < n; j++){
            graph[i][j] = 0;
        }
    }
    printf("\nEnter the number of edges: ");
    scanf("%d", &e);
    for(int i = 0; i < e; i++){
        printf("\nEnter the end vertices of edge %d: ", i + 1);
        scanf("%d%d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    printf("\nThe adjacency matrix of the graph is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    enqueue(0);
    visited[0] = 1;
    while(!isempty()){
        int current = dequeue();
        printf("%2d -> ", current);
        for(int i = 0; i < n; i++){
            if(visited[i] != 1 && graph[current][i] == 1){
                parent[i] = current;
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("NULL");
    int src = 0;
    int dest = 5;
    int path[50] = {-1};
    int c = 0;
    printf("\nThe shortest path is: ");
    printf("%2d", dest);
    path[0] = dest;
    while(parent[dest] != src){
        int imidiateParent = parent[dest];
        printf("%2d",  imidiateParent);
        c++;
        path[c] = imidiateParent;
        dest = imidiateParent;
    }
    printf("%2d", src);
    c++;
    path[c] = src;
    printf("\nPath is: ");
    for (int i = c; i >= 0; i--) {
        printf("%2d -> ", path[i]);
    }
    printf("END");
    return 0;
}