#include<stdio.h>
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
    return front == -1 || front > rear;
}
void dequeue(){
	if(front > rear || front == -1){
		front = rear = -1;
	}
	else{
		front++;
	}	
}
int main(){
    int v;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    int arr[v][v];
    int i,j;
    for(i = 0; i < v; i++){
        for(j = 0; j < v; j++){
            arr[i][j] = 0;
        }
    }
    int e,v1,v2;
    printf("Enter the number of edges:");
    scanf("%d",&e);
    for(i = 0; i < e; i++){
       printf("Enter the end vertices for the %dth edge:",i+1);
       scanf("%d%d",&v1,&v2);
       arr[v1][v2] = arr[v2][v1] = 1;
    }

    for(i = 0; i < v; i++){
        for(j = 0; j < v; j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
	int visited[4] = {0,0,0,0};
	int start = 3;
	int index;
	visited[start] = 1;
	enqueue(start);
	while(empty() != 1){
		int p = queue[front];
		printf("%d->",p);
		dequeue();
		for(index = 0; index < v; index++){
			if(arr[p][index] == 1 && visited[index] != 1){
				enqueue(index);
				visited[index] = 1;
			}
		}
	}
	printf("null");
}
