#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void insertAt(int data, int position)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL && position > 2)
    {
        temp = temp->next;
        position--;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return;
}
void pop()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    // head = head->next;
    // free(temp);
    // printf("Node popped\n");
    // return;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    printf("Node popped\n");
    return;
}
void display()
{
    struct node *prev = head;
    while (prev != NULL)
    {
        printf("%d->", prev->data);
        prev = prev->next;
    }
    printf("NULL\n");
}
int size()
{
    struct node *prev = head;
    int c = 0;
    while (prev != NULL)
    {
        c++;
        prev = prev->next;
    }
    return c;
}
int main()
{
    insert(6);
    insert(4);
    insert(1);
    insert(9);
    insert(5);
    insert(8);
    insert(3);
    insert(7);
    insert(2);
    display();
    printf("Size of the linked list is: %d\n", size());
    pop();
    display();
    printf("Size of the linked list is: %d\n", size());
    pop();
    display();
    printf("Size of the linked list is: %d\n", size());
    insertAt(10, 3);
    display();
    printf("Size of the linked list is: %d\n", size());
    return 0;
}