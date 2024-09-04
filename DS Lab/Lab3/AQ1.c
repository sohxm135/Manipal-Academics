#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top,size;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

bool isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int item) {
    if (isFull(stack)) {
        printf("Stack overflow, cannot push %d\n", item);
        return;
    }
    stack->top++;
    stack->items[stack->top] = item;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow, cannot pop\n");
        return -1; // Return an error value
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;
    return poppedItem;
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot peek\n");
        return -1; // Return an error value
    }
    return stack->items[stack->top];
}
void displayStack(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%c ", stack->items[i]);
    }
    printf("\n");
}

int main(){
    int n,i=1,temp;;    
    printf("\nEnter the number of stacks:");
    scanf("%d",&n);
    struct Stack multiStack[n];
    while(n--){
        printf("\nEnter the size of stack %d: ",i);
        scanf("%d",&multiStack[i].size);
        i++;
    }
    for(int j=1;j<=n;j++){
        for(int k=0;k<multiStack[j].size;k++){
            printf("Stack %d: Push ",j);
            scanf("%d",&temp);
            push(&multiStack[j],temp);
            printf(k!=(multiStack[j].size-1)?", ":"");
        }
        printf("\n");
    }
    //display stack
    for(int j=0;j<=n;j++){
        displayStack(&multiStack[j]);
    }

    return 0;
}