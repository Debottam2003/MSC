#include<stdio.h>
int main(){
    int v,e;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    printf("Enter the number of edges:");
    scanf("%d",&e);
    int arr[v][e];
    int i,j;
    for(i = 0; i < v; i++){
        for(j = 0; j < e; j++){
            arr[i][j] = 0;
        }
    }
    int v1,v2,w;
    for(i = 0; i < e; i++){
       printf("Enter the end vertices for the %d edge and weight:",(i + 1));
       scanf("%d%d%d",&v1,&v2,&w);
       arr[v1][i] = arr[v2][i] = w;
    }

    for(i = 0; i < v; i++){
        for(j = 0; j < e; j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}