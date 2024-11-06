#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

struct Node* concatenate(struct Node* X1, struct Node* X2) {
    if (X1 == NULL) {
        return X2;
    }

    struct Node* last = X1;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = X2;
    X2->prev = last;

    return X1;
}

void printList(struct Node* node) {
    printf("Doubly Linked List: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* X1 = newNode(1);
    X1->next = newNode(2);
    X1->next->prev = X1;
    X1->next->next = newNode(3);
    X1->next->next->prev = X1->next;

    struct Node* X2 = newNode(4);
    X2->next = newNode(5);
    X2->next->prev = X2;
    X2->next->next = newNode(6);
    X2->next->next->prev = X2->next;

    printf("X1: ");
    printList(X1);
    printf("X2: ");
    printList(X2);

    X1 = concatenate(X1, X2);

    printf("Concatenated list: ");
    printList(X1);

    return 0;
}