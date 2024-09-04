#include <stdio.h>
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
        printf("Stack overflow\n");
        return;
    }
    stack->top++;
    stack->items[stack->top] = item;
}

char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1; // Return an error value
    }

    char poppedItem = stack->items[stack->top];
    stack->top--;
    return poppedItem;
}

bool matchParenthesis(char opening, char closing) {
    if (opening == '(' && closing == ')') return true;
    if (opening == '[' && closing == ']') return true;
    if (opening == '{' && closing == '}') return true;
    return false;
}

bool checkMatchingParenthesis(char *expression) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            push(&stack, expression[i]);
        } else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
            if (isEmpty(&stack)) {
                printf("Unbalanced parentheses\n");
                return false;
            }
            char opening = pop(&stack);
            if (!matchParenthesis(opening, expression[i])) {
                printf("Mismatched parentheses\n");
                return false;
            }
        }
    }

    if (!isEmpty(&stack)) {
        printf("Unbalanced parentheses\n");
        return false;
    }

    return true;
}

int main() {
    char expression[100];
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    expression[strcspn(expression, "\n")] = 0; // Remove newline character

    if (checkMatchingParenthesis(expression)) {
        printf("Parentheses are balanced\n");
    }

    return 0;
}