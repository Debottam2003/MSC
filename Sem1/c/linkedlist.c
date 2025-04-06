#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
    int data;
    struct node *next;
};

// Initialize the head of the linked list
struct node *head = NULL;

// Function prototypes
void insertEnd(int data);
void insertBegin(int data);
void insertSort(int data);
void sort();
void display();

int main() {
    // Insert elements into the linked list
    insertEnd(50);
    insertEnd(10);
    insertBegin(23);
    insertEnd(22);
    insertSort(10);
    insertSort(23);
    insertSort(22);
    insertSort(50);
    insertSort(5);
    // Display the linked list
    display();
    
    // Sort the linked list
    sort();
    
    // Display the sorted linked list
    display();
    
    return 0;
}

// Function to insert a node at the beginning of the linked list
void insertBegin(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end of the linked list
void insertEnd(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertSort(int data){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL || data <= head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL && newNode->data > temp->next->data) {
        temp = temp->next; 
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to sort the linked list using bubble sort
void sort() {
    int length = 0;
    struct node *temp = head;
    
    // Calculate the length of the linked list
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    
    int i, j, k;
    struct node *prev = NULL;
    
    // Perform bubble sort on the linked list
    for (i = 0; i < length - 1; i++) {
        prev = head;
        for (j = 0; j < length - i - 1; j++) {
            if (prev->data > prev->next->data) {
                // Swap the data of the nodes
                k = prev->data;
                prev->data = prev->next->data;
                prev->next->data = k;
            }
            prev = prev->next;
        }
    }
}

// Function to display the linked list
void display() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}