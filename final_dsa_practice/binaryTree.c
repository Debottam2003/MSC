#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
int i = -1;
struct node *createTree(int data[])
{
    i++;
    if (data[i] == -1)
    {
        return NULL;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data[i];
    newnode->left = createTree(data);
    newnode->right = createTree(data);
    return newnode;
}
void displayPostorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    } 
        displayPostorder(root->left);
        displayPostorder(root->right);
        printf("%2d", root->data);
}
void displayInorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
        displayInorder(root->left);
        printf("%2d", root->data);
        displayInorder(root->right);
}
void displayPreorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
        printf("%2d", root->data);
        displayPreorder(root->left);
        displayPreorder(root->right);
}
int main()
{
    int treeArr[] = {1, 2, -1, 4, -1, -1, 3, -1, 5, -1, -1};
    struct node *root = createTree(treeArr);
    // printf("%d", root->data);
    displayPreorder(root);
    printf("\n");
    displayInorder(root);
    printf("\n");
    displayPostorder(root);
    return 0;
}