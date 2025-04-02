#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* insert(struct node* head, int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        return head;
    }
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
int main(){
    int v, v1, v2, e; 
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &v);
    struct node* adj[v];
    for(int i = 0;i < v; i++){
        adj[i] = NULL;
    }
    // for(int i = 0; i < v; i++){
    //     printf("Enter the number of vertices connected with vertex %d: ",i);
    //     scanf("%d", &e);
    //     for(int j = 0; j < e; j++){
    //         int data;
    //         printf("Enter %d the vertex connected with vertex %d: ", j+1, i);
    //         scanf("%d", &data);
    //         adj[i] = insert(adj[i], data);
    //     }
    // }
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &e);
    for(int i = 0; i < e; i++){
        printf("Enter the edge %d: ", i + 1);
        scanf("%d%d", &v1, &v2);
        adj[v1] = insert(adj[v1], v2);
        adj[v2] = insert(adj[v2], v1);
    }
    for(int i = 0; i < v; i++){
        printf("\nAjacency list of vertex %d: \n", i);
        struct node* temp = adj[i];
        printf("%d -> ", i);
        while(temp != NULL){
            printf("%2d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    return 0;
}