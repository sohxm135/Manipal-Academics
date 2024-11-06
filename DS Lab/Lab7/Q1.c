#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertBefore(Node** head, int newData, int beforeData) {
    Node* newNode = createNode(newData);
    if (newNode == NULL) return; 

    Node* temp = *head;
    if (temp == NULL) {
        printf("List is empty.\n");
        free(newNode);
        return;
    }
    if (temp->data == beforeData) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    while (temp->next && temp->next->data != beforeData) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("Element %d not found.\n", beforeData);
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAfter(Node* head, int newData, int afterData) {
    Node* temp = head;
    while (temp && temp->data != afterData) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element %d not found.\n", afterData);
        return;
    }
    Node* newNode = createNode(newData);
    if (newNode == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteElement(Node** head, int data) {
    Node* temp = *head;
    Node* prev = NULL;
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element %d not found.\n", data);
        return;
    }
    prev->next = temp->next;
    free(temp);
}

void traverseList(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void reverseList(Node** head) {
    Node* prev = NULL;
    Node* curr = *head;
    Node* next = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void sortList(Node** head) {
    if (*head == NULL || (*head)->next == NULL) return;

    Node* i = *head;
    Node* j = NULL;
    int temp;
    while (i) {
        j = i->next;
        while (j) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}

void deleteAlternate(Node** head) {
    Node* temp = *head;
    while (temp != NULL && temp->next != NULL) {
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        free(nodeToDelete);
        temp = temp->next;
    }
}

void insertInSorted(Node** head, int newData) {
    Node* newNode = createNode(newData);
    if (newNode == NULL) return; 

    if (*head == NULL || (*head)->data >= newData) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current->next != NULL && current->next->data < newData) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

int main() {
    Node* head = NULL;
    int choice, newData, existingData;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element before another element\n");
        printf("2. Insert an element after another element\n");
        printf("3. Delete a given element\n");
        printf("4. Traverse the list\n");
        printf("5. Reverse the list\n");
        printf("6. Sort the list\n");
        printf("7. Delete every alternate node\n");
        printf("8. Insert an element in a sorted list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter new data: ");
                scanf("%d", &newData);
                printf("Enter existing data to insert before: ");
                scanf("%d", &existingData);
                insertBefore(&head, newData, existingData);
                break;
            case 2:
                printf("Enter new data: ");
                scanf("%d", &newData);
                printf("Enter existing data to insert after: ");
                scanf("%d", &existingData);
                insertAfter(head, newData, existingData);
                break;
            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &newData);
                deleteElement(&head, newData);
                break;
            case 4:
                traverseList(head);
                break;
            case 5:
                reverseList(&head);
                break;
            case 6:
                sortList(&head);
                break;
            case 7:
                deleteAlternate(&head);
                break;
            case 8:
                printf("Enter new data to insert in a sorted list: ");
                scanf("%d", &newData);
                insertInSorted(&head, newData);
                break;
            case 9:
                while (head != NULL) {
                    Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
}

