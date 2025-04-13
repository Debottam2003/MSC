#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// creation
struct node *create(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
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
};
// display
void display(struct node *head)
{
    struct node *temp = head;
    int degree = 0;
    while (temp != NULL)
    {
        printf("%2dx^%d -> ", temp->data, degree);
        degree++;
        temp = temp->next;
    }
    printf("NULL\n");
}
// addition
struct node *add(struct node *a, struct node *b)
{
    struct node *temp1 = a;
    struct node *temp2 = b;
    struct node *res = NULL;
    while (temp1 != NULL)
    {
        res = create(res, temp1->data + temp2->data);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return res;
}
// subtraction
struct node *sub(struct node *a, struct node *b)
{
    struct node *temp1 = a;
    struct node *temp2 = b;
    struct node *res = NULL;
    while (temp1 != NULL)
    {
        res = create(res, temp1->data - temp2->data);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return res;
}
// differentiate
struct node *differentiate(struct node *head)
{
    struct node *temp = head->next;
    int degree = 1;
    struct node *res = NULL;
    while (temp != NULL)
    {
        res = create(res, temp->data * degree);
        temp = temp->next;
        degree++;
    }
    return res;
}
struct node *insertAt(struct node *head, int data, int position)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp != NULL && position > 0)
    {
        position--;
        prev = temp;
        temp = temp->next;
    }
    if (temp != NULL && position == 0)
    {
        newnode->data = newnode->data + data;
    }
    else
    {
        newnode->next = temp;
        prev->next = newnode;
    }
    return head;
}
// multiply
struct node *multiply(struct node *a, struct node *b)
{
    struct node *temp1 = a;
    struct node *temp2 = NULL;
    struct node *res = NULL;
    int degree1 = 0;
    int degree2 = 0;
    while (temp1 != NULL)
    {
        temp2 = b;
        degree2 = 0;
        while (temp2 != NULL)
        {
            res = insertAt(res, temp1->data * temp2->data, degree1 + degree2);
            temp2 = temp2->next;
            degree2++;
        }
        temp1 = temp1->next;
        degree1++;
    }
    return res;
}
int main()
{
    int m, n, data;
    printf("Enter the degree of the first polynomial: \n");
    scanf("%d", &m);
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    for (int i = 0; i <= m; i++)
    {
        printf("Enter the coficient of x^%d: ", i);
        scanf("%d", &data);
        head1 = create(head1, data);
    }
    printf("Enter the degree of the second polynomial: \n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("Enter the coficient of x^%d: ", i);
        scanf("%d", &data);
        head2 = create(head2, data);
    }
    display(head1);
    display(head2);
    struct node *resAdd = add(head1, head2);
    display(resAdd);
    struct node *resSub = sub(head1, head2);
    display(resSub);
    struct node *resDiff = differentiate(head1);
    display(resDiff);
    struct node *resMul = multiply(head1, head2);
    display(head1);
    display(head2);
    display(resMul);
    return 0;
}