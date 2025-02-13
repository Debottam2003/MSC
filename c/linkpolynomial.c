#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void create(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *prev = head;
        while (prev->next != NULL)
        {
            prev = prev->next;
        }
        prev->next = newnode;
    }
}
void print(){
    int i = 0;
    struct node *prev = head;
    while (prev != NULL)
    {
        if (prev->next != NULL)
            printf("%2dx^%d + ", prev->data, i);
        else
            printf("%2dx^%d", prev->data, i);
        prev = prev->next;
        i++;
    }
}
int main()
{
    create(2);
    create(-3);
    create(5);
    create(1);
    print();
    return 0;
}
