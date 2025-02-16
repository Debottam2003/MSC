#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *arr[10];
struct node *head = NULL;
struct node *insert(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            insert(10 * (j + 1));
        }
        arr[i] = head;
        head = NULL;
    }
    for (int i = 0; i < 5; i++)
    {
        struct node *prev = arr[i];
        while (prev != NULL)
        {
            printf("%2d->", prev->data);
            prev = prev->next;
        }
        printf("NULL\n");
    }
    return 0;
}