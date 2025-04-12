#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    int weight;
    struct node* next;
};

// Insert function updated to include weight
struct node* insert(struct node* head, int data, int weight){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->weight = weight;
    newnode->next = NULL;
    if(head == NULL){
        return newnode;
    }
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

int main(){
    int v, v1, v2, e, weight;
    int graphType;

    printf("Choose graph type:\n");
    printf("1. Undirected Unweighted\n");
    printf("2. Undirected Weighted\n");
    printf("3. Directed Unweighted\n");
    printf("4. Directed Weighted\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &graphType);

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &v);

    struct node* adj[v];
    for(int i = 0; i < v; i++){
        adj[i] = NULL;
    }

    printf("Enter the number of edges in the graph: ");
    scanf("%d", &e);

    for(int i = 0; i < e; i++){
        printf("Enter edge %d (format: v1 v2", i + 1);
        if(graphType == 2 || graphType == 4){
            printf(" weight");
        }
        printf("): ");
        
        if(graphType == 2 || graphType == 4){
            scanf("%d%d%d", &v1, &v2, &weight);
        } else {
            scanf("%d%d", &v1, &v2);
            weight = 0;  // default for unweighted
        }

        switch(graphType){
            case 1: // Undirected Unweighted
                adj[v1] = insert(adj[v1], v2, weight);
                adj[v2] = insert(adj[v2], v1, weight);
                break;
            case 2: // Undirected Weighted
                adj[v1] = insert(adj[v1], v2, weight);
                adj[v2] = insert(adj[v2], v1, weight);
                break;
            case 3: // Directed Unweighted
                adj[v1] = insert(adj[v1], v2, weight);
                break;
            case 4: // Directed Weighted
                adj[v1] = insert(adj[v1], v2, weight);
                break;
            default:
                printf("Invalid graph type selected.\n");
                return 1;
        }
    }

    // Print adjacency list
    for(int i = 0; i < v; i++){
        printf("\nAdjacency list of vertex %d:\n", i);
        struct node* temp = adj[i];
        printf("%d -> ", i);
        while(temp != NULL){
            if(graphType == 2 || graphType == 4)
                printf("(%d, w:%d) -> ", temp->data, temp->weight);
            else
                printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

    return 0;
}
