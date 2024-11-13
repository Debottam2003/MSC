#include<stdio.h>
int front = -1;
int rear = -1;
#define max 5
int arr[max];

void peek(){
    int i;
    if(front == -1){
        printf("The queue is empty...\n");
    }
    else{
        for(i = front; i <= rear; i++){
           printf("%4d",arr[i]);
    }
    printf("\n");
    }
}

void enqueue(int item){
     if(rear == max - 1){
        printf("Queue is full...\n");
     }
     else{
        rear++;
        arr[rear] = item;
        if(front == -1){
            front++;
        }
        peek();
     }
}

void dequeue(){
    if(front == -1 || front > rear){
        printf("The queue is empty...\n");
        // printf("%d %d\n", font, rear);
    }
    if(front > rear){
        front = rear = -1;
    }
    else{
        front++;
        peek();
    }
}

int main(){
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(70);
    enqueue(80);
    dequeue();
    peek();
}