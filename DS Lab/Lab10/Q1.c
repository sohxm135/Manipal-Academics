#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) 
    {
        return create(data);
    }
    int choice;
    printf("Insert %d to the left or right of %d? (1 for left, 2 for right): ", data, root->data);
    scanf("%d", &choice);
    if (choice == 1) 
    {
        root->left = insert(root->left, data);
    }
    else if (choice == 2) 
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorder(struct Node* root) {
    struct Node* stack[100];
    int top = -1;
    struct Node* curr = root;
    while (curr != NULL || top != -1) {
        while (curr != NULL) {
            stack[++top] = curr;
            curr = curr->left;
        }
        curr = stack[top--];
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

void preorder(struct Node* root) {
    if (root == NULL) 
    {
        return;
    }
    struct Node* stack[100];
    int top = -1;
    stack[++top] = root;
    while (top != -1) {
        struct Node* node = stack[top--];
        printf("%d ", node->data);
        if (node->right) 
        {
            stack[++top] = node->right;
        }
        if (node->left) 
        {
            stack[++top] = node->left;
        }
    }
}

void postorder(struct Node* root) {
    struct Node* stack1[100], * stack2[100];
    int top1 = -1, top2 = -1;
    if (root != NULL) 
    {
        stack1[++top1] = root;
    }
    while (top1 != -1) {
        struct Node* node = stack1[top1--];
        stack2[++top2] = node;
        if (node->left) stack1[++top1] = node->left;
        if (node->right) stack1[++top1] = node->right;
    }
    while (top2 != -1) {
        printf("%d ", stack2[top2--]->data);
    }
}

void printParent(struct Node* root, int element) {
    if (root == NULL || root->data == element) 
    {
        return;
    }
    if ((root->left && root->left->data == element) || (root->right && root->right->data == element)) {
        printf("Parent of %d is %d\n", element, root->data);
        return;
    }
    printParent(root->left, element);
    printParent(root->right, element);
}

int treeDepth(struct Node* root) {
    if (root == NULL) 
    {
        return 0;
    }
    int leftDepth = treeDepth(root->left);
    int rightDepth = treeDepth(root->right);
    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
}

int printAncestors(struct Node* root, int element) {
    if (root == NULL) return 0;
    if (root->data == element) return 1;
    if (printAncestors(root->left, element) || printAncestors(root->right, element)) {
        printf("%d ", root->data);
        return 1;
    }
    return 0;
}

int countLeaves(struct Node* root) {
    if (root == NULL) 
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    return countLeaves(root->left) + countLeaves(root->right);
}

int main() {
    struct Node* root = NULL;
    int choice, data, element;

    printf("Enter the root node: ");
    scanf("%d", &data);
    root = create(data);

        printf("\nMenu:\n");
        printf("1. Insert Node\n");
        printf("2. In-order Traversal\n");
        printf("3. Pre-order Traversal\n");
        printf("4. Post-order Traversal\n");
        printf("5. Print Parent of an Element\n");
        printf("6. Print Depth of the Tree\n");
        printf("7. Print Ancestors of an Element\n");
        printf("8. Count Leaf Nodes\n");
        printf("9. Exit\n");
        do{
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &data);
                insert(root, data);
                break;
            case 2:
                printf("In-order Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Pre-order Traversal: ");
                preorder(root);
                printf("\n");
                break;
            case 4:
                printf("Post-order Traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 5:
                printf("Enter the element to find its parent: ");
                scanf("%d", &element);
                printParent(root, element);
                break;
            case 6:
                printf("Depth of the tree: %d\n", treeDepth(root));
                break;
            case 7:
                printf("Enter the element to find its ancestors: ");
                scanf("%d", &element);
                printf("Ancestors of %d: ", element);
                if (!printAncestors(root, element)) printf("No ancestors found");
                printf("\n");
                break;
            case 8:
                printf("Number of leaf nodes: %d\n", countLeaves(root));
                break;
            case 9:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }while(1);
    return 0;
}
