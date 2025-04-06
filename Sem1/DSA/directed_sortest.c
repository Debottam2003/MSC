#include<stdio.h>
#include<stdlib.h>
int queue[100];
int front = -1;
int rear = -1;
void enqueue(int value){
	if(rear < 99){
		rear++;
		queue[rear] = value;
		if(front == -1){
			front++;
		}
	}
}
int empty(){
	if(front == -1 || front > rear){
		return 1;
	}
	else{
		return 0;
	}
}
void dequeue(){
	if(front > rear){
		front = rear = -1;
	}
	else{
		front++;
	}	
}
int main(){
	int v;
	printf("Enter the number of vertices:");
	scanf("%d",&v);
	int graph[v][v],i,j;
	int visited[v];
	int parent[20];
	int path[v];
	for(i = 0;i < v; i++){
		parent[i] = -1;
		visited[i] = 0;
		for(j = 0; j < v; j++){
			graph[i][j] = 0;
		}
	}
	int e,v1,v2;
	printf("Enter the number of edges:");
	scanf("%d",&e);
	for(i = 0; i < e; i++){
		printf("Enter the end vertices for %dth edge:", i + 1);
		scanf("%d%d",&v1,&v2);
		graph[v1][v2] = 1;
	}
	int start;
	printf("\nEnter the start vertex:");
	scanf("%d",&start);
	int end = 3;
	printf("\nEnter the end vertex:");
	scanf("%d",&end);
	visited[start] = 1;
	enqueue(start);
	while(empty() != 1){
		int p = queue[front];
		printf("%d->",p);
		if(p == end){
			break;
		}
		dequeue();
		for(i = 0; i < v; i++){
			if(graph[p][i] == 1 && visited[i] != 1){
				parent[i] = p; 
				enqueue(i);
				visited[i] = 1;
			}
		}	
	}
	printf("Null");
	printf("\nShortest path:-\n");
i = end;
int pr[v], count = 0;
j = 0;
while(parent[i] != -1){	
//	printf("%d->",parent[i]);
	count++;
	i = parent[i];
    pr[j] = i;
    j++;
}
for(i = count - 1; i >= 0; i--){	
     printf("%d->",pr[i]);
}
printf("%d",end);
}
