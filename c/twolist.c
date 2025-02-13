#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *create(struct node *head, int data)
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
    return head;
}
void print(struct node *head)
{
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
struct node *add(struct node *head1, struct node *head2)
{
    struct node *a = head1;
    struct node *b = head2;
    struct node *res = NULL;
    while (a != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->data = a->data + b->data;
        newnode->next = NULL;
        if (res == NULL)
        {
            res = newnode;
        }
        else
        {
            struct node *prev = res;
            while (prev->next != NULL)
            {
                prev = prev->next;
            }
            prev->next = newnode;
        }
        a = a->next;
        b = b->next;
    }
    return res;
}
struct node *sub(struct node *head1, struct node *head2)
{
    struct node *a = head1;
    struct node *b = head2;
    struct node *res = NULL;
    while (a != NULL)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->data = a->data - b->data;
        newnode->next = NULL;
        if (res == NULL)
        {
            res = newnode;
        }
        else
        {
            struct node *prev = res;
            while (prev->next != NULL)
            {
                prev = prev->next;
            }
            prev->next = newnode;
        }
        a = a->next;
        b = b->next;
    }
    return res;
}
int main()
{
    struct node *head1 = NULL;
    head1 = create(head1, 2);
    head1 = create(head1, -3);
    head1 = create(head1, 1);
    head1 = create(head1, 5);
    printf("First list: ");
    print(head1);
    printf("\n");

    struct node *head2 = NULL;
    head2 = create(head2, 4);
    head2 = create(head2, 0);
    head2 = create(head2, -1);
    head2 = create(head2, 3);
    printf("Second list: ");
    print(head2);
    printf("\n");
    struct node *addresult = add(head1, head2);
    printf("The addision result of the two polynomials is:");
    print(addresult);
    printf("\n");
    struct node *subresult = sub(head1, head2);
    printf("The subtraction result of the two polynomials is:");
    print(subresult);
    printf("\n");
    return 0;
}