#include <stdio.h>
#include <stdlib.h>

struct tree {
    int data;
    struct tree *left;
    struct tree *right;
};

int i = -1;

struct tree *insert(int data[], int size) {
    i++;
    if (i >= size || data[i] == -1) {
        return NULL;
    }
    
    struct tree *newnode = (struct tree *)malloc(sizeof(struct tree));
    if (!newnode) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newnode->data = data[i];
    newnode->left = insert(data, size);
    newnode->right = insert(data, size);

    return newnode;
}

void inorder(struct tree *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct tree *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct tree *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    int binarytree[] = {1, 2, 4, -1, -1, 5, -1, -1, 6, -1, -1};
    int size = sizeof(binarytree) / sizeof(binarytree[0]);

    struct tree *root = insert(binarytree, size);

    printf("Preorder: ");
    preorder(root);
    printf("\n");

    printf("Inorder: ");
    inorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    return 0;
}
