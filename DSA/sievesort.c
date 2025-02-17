#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        return newnode;
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
    int list[] = {7, 8, 9, 2, 3, 5, 21, 10, 13};
    int n = sizeof(list) / sizeof(list[0]);

    struct node **arr = (struct node **)malloc(n * sizeof(struct node *));
    for (int i = 0; i < n; i++)
    {
        arr[i] = NULL;
    }

    int p = 0;
    int inserted = 0;
    arr[p] = insert(NULL, list[0]);

    for (int i = 1; i < n; i++)
    {
        inserted = 0;
        for (int j = 0; j <= p; j++)
        {
            if (arr[j]->data > list[i])
            {
                arr[j] = insert(arr[j], list[i]);
                inserted = 1;
                break;
            }
        }
        if (!inserted)
        {
            p++;
            arr[p] = insert(NULL, list[i]);
        }
    }

    // Printing the list
    printf("Sieve sorted linked lists:\n");
    for (int i = 0; i < n; i++)
    {
        struct node *temp = arr[i];
        while (temp != NULL)
        {
            printf("%2d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

    return 0;
}
