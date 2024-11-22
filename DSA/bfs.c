#include<stdio.h>
int queue[16];
int front = -1;
int rear = -1;
void enqueue(int value){
	if(rear < 15){
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
	int graph[4][4] = {
	            {0,1,1,0},
	            {0,0,0,0},
				{1,0,0,0},
				{0,0,1,0}
				};
	int visited[4] = {0,0,0,0};
	int start = 2;
	int i;
	visited[start] = 1;
	enqueue(start);
	while(empty() != 1){
		int p = queue[front];
		printf("%d->",p);
		dequeue();
		for(i = 0; i < 4; i++){
			if(graph[p][i] == 1 && visited[i] != 1){
				enqueue(i);
				visited[i] = 1;
			}
		}
	}
	printf("null");
}
