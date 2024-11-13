#include<stdio.h>
int top = -1;
#define max 20
int arr[max];

void peek(){
    int i;
    if(top > -1){
    for(i = 0; i <= top; i++){
           printf("%4d",arr[i]);
    }
    printf("\n");
    }
    else{
        printf("The stack is empty...\n");
    }
}

void push(int item){
     if(top == max - 1){
        printf("Stack Overflow...\n");
     }
     else{
        top++;
        arr[top] = item;
        peek();
     }
}

void pop(){
    if(top == -1){
        printf("The stack is empty...\n");
    }
    else{
        top--;
        peek();
    }
}

int main(){
    pop();
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    push(50);
    peek();
    push(40);
    push(60);
    pop();
    push(70);
}