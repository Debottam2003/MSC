#include<stdio.h>
int count = 0;
void work(int s,int visited[30],int graph[30][30],int v){
int i;
if(visited[s] == 1){
	return;
}

	visited[s] = 1;
	count++;
	printf("%d[dfs_no: %d] ->",s,count);

for(i = 0;i < v; i++){
	if(graph[s][i] == 1 && visited[i] == 0){
		work(i,visited,graph,v);
	}
}
}
int main(){
	int v;
	printf("Enter the number of vertices:");
	scanf("%d",&v);
	int graph[30][30],i,j;
	int visited[30];
	for(i = 0;i < v; i++){
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
		graph[v1][v2] = graph[v2][v1] = 1;
	}
	work(2,visited,graph,v);
}
