#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    int weight;
    struct node* next;
};
struct  node* head = NULL;
void CreateNewnode(int value, int weight){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));  
     if(head == NULL){
       newnode->data = value;
       newnode->weight = weight;
       newnode->next = NULL;
       head = newnode;
     }
     else{
        struct node* prev = head;
        while (prev->next != NULL)
        {
               prev = prev->next;
        }
            newnode->data = value;
            newnode->weight = weight;
            newnode->next = NULL;
            prev->next = newnode;
     }
}
int main(){
int v,n,i,j,v1,w;
printf("Enter the no of vertices in the graph:");
scanf("%d",&v);
struct node* arr[v];
for(i = 0; i < v; i++){
    printf("Enter the number of vertices connected with %dth vertex:",i);
    scanf("%d",&n);
    for(j = 0;j < n; j++){
       printf("Enter the vertex and wight connected with %dth vertex:",i);
       scanf("%d%d",&v1,&w);
       CreateNewnode(v1,w);
    }
    arr[i] = head;
    head = NULL;
}
for(i = 0; i < v; i++){
        struct node* prev = arr[i];
        printf("%d->",i);
        while (prev != NULL)
        {      
               printf("%d|[%d]->",prev->data,prev->weight); 
               prev = prev->next;
        }
        printf("\n");
     }
}