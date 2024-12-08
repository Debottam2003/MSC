#include<stdio.h>
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
    int e,v1,v2,w;
    printf("Enter the number of edges:");
    scanf("%d",&e);
    for(i = 0; i < e; i++){
       printf("Enter the end vertices for the %d edge and weight:",i);
       scanf("%d%d%d",&v1,&v2,&w);
       arr[v1][v2] = arr[v2][v1] = w;
    }

    for(i = 0; i < v; i++){
        for(j = 0; j < v; j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}