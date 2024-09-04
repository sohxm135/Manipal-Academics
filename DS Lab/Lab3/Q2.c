#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    char items[MAX_SIZE];
    int top;
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

void push(struct Stack *stack, char item) {
    if (isFull(stack)) {
        printf("Stack overflow, cannot push %d\n", item);
        return;
    }
    stack->top++;
    stack->items[stack->top] = item;
}

char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow, cannot pop\n");
        return -1; // Return an error value
    }

    char poppedItem = stack->items[stack->top];
    stack->top--;
    return poppedItem;
}

char peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty, cannot peek\n");
        return -1; // Return an error value
    }
    return stack->items[stack->top];
}

char reVal(int num) {
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

char* fromDeci(int base, int inputNum, struct Stack *convert) {
    int i = 0;
    char* ans = (char*)malloc((MAX_SIZE + 1) * sizeof(char)); // Dynamically allocate memory

    push(convert, '\0');

    while (inputNum > 0) {
        push(convert, reVal(inputNum % base));
        inputNum /= base;
    }
    while (peek(convert) != '\0') {
        ans[i] = pop(convert);
        i++;
    }
    ans[i] = '\0'; // Null-terminate the string

    return ans;
}

int main() {
    int inputNum , base;
    printf("Enter input number: ");
    scanf("%d",&inputNum);
    printf("Enter base: ");
    scanf("%d",&base);
    struct Stack convert;
    initialize(&convert);

    printf("\nEquivalent of %d in base %d is %s\n", inputNum, base, fromDeci(base, inputNum, &convert));
    return 0;
}