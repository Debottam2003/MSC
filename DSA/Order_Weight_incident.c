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
    int v1,v2,tail,head,w;
    for(i = 0; i < e; i++){
       printf("Enter the end Tail and Head and for the %d edge:",(i + 1));
       scanf("%d%d%d",&tail,&head,&w);
       arr[tail][i] = w;
       arr[head][i] = -w;
    }

    for(i = 0; i < v; i++){
        for(j = 0; j < e; j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}