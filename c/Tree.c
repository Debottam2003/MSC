#include<stdio.h>
struct node {
   int data;
   struct node* node;
};
int main(){
    struct node head;
    head.data = 10;
    printf("%d", head.data);
    return 0;
}