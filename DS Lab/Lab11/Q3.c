#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

int search(Node* root, int data) {
    if (root == NULL) return 0;
    if (root->data == data) return 1;
    if (data < root->data) return search(root->left, data);
    return search(root->right, data);
}

int main() {
    Node* root = NULL;
    int data;

    printf("Enter elements to insert into BST (-1 to stop): ");
    while (1) {
        scanf("%d", &data);
        if (data == -1) break;
        root = insert(root, data);
    }

    printf("Enter element to search: ");
    scanf("%d", &data);
    if (search(root, data)) {
        printf("Element found in the tree.\n");
    } else {
        printf("Element not found in the tree.\n");
    }

    return 0;
}
