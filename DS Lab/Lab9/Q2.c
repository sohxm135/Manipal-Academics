#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node* next;
};

void append(struct Node** head, int coeff, int power) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;
    if (*head == NULL) 
    {
        *head = newNode;
    } 
    else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

struct Node* add(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->power > poly2->power) {
            append(&result, poly1->coeff, poly1->power);
            poly1 = poly1->next;
        } else if (poly1->power < poly2->power) {
            append(&result, poly2->coeff, poly2->power);
            poly2 = poly2->next;
        } else {
            int sumCoeff = poly1->coeff + poly2->coeff;
            if (sumCoeff != 0) {
                append(&result, sumCoeff, poly1->power);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL) {
        append(&result, poly1->coeff, poly1->power);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        append(&result, poly2->coeff, poly2->power);
        poly2 = poly2->next;
    }
    return result;
}

void display(struct Node* poly) {
    int first = 1;
    while (poly != NULL) {
        if (poly->coeff != 0) {
            if (!first) printf(" + ");
            if (poly->power == 0)
                printf("%d", poly->coeff);
            else if (poly->power == 1)
                printf("%dx", poly->coeff);
            else
                printf("%dx^%d", poly->coeff, poly->power);
            first = 0;
        }
        poly = poly->next;
    }
    printf("\n");
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    int n, coeff, power;

    printf("Enter the number of terms in Polynomial 1: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and power for term %d: ", i + 1);
        scanf("%d %d", &coeff, &power);
        append(&poly1, coeff, power);
    }

    printf("Enter the number of terms in Polynomial 2: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and power for term %d: ", i + 1);
        scanf("%d %d", &coeff, &power);
        append(&poly2, coeff, power);
    }

    struct Node* result = add(poly1, poly2);

    printf("Polynomial 1: ");
    display(poly1);
    printf("Polynomial 2: ");
    display(poly2);
    printf("Result: ");
    display(result);

    return 0;
}