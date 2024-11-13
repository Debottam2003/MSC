#include<stdio.h>
int front = -1;
int rear = -1;
#define max 5
int arr[max];

int peek(){
    int i;
    if(front == -1){
        printf("The queue is empty...\n");
        return -1;
    }
    if(rear >= front){
        for(i = front; i <= rear; i++){
            printf("%4d",arr[i]);
    }
    }
    else{
        for(i = 0; i <= rear; i++){
            printf("%4d",arr[i]);
        }
        for (int i = front; i < max; i++){
            printf("%4d ", arr[i]);
        }
    }
    printf("\n");
}

int enqueue(int item){
     if((rear + 1) % max == front){
        printf("Queue is full...\n");
        return -1;
     }
     if(front == -1){
        front = rear = 0;
        arr[rear] = item;
     }
     else{
         rear = (rear + 1) % max;
         arr[rear] = item;
     }
     peek();
}

int dequeue(){
    if(front == -1){
        printf("The queue is empty...\n");
        return -1;
    }
    int data = arr[front];
    if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % max;
    }
    printf("%4d is deleted\n",data);
    peek();
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
    enqueue(90);
    dequeue();
    enqueue(100);
    dequeue();
    dequeue();
    dequeue();
    enqueue(70);
    enqueue(80);
    dequeue();
    peek();
}