
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
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

void push(struct Stack *stack, int item) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        return;
    }
    stack->top++;
    stack->items[stack->top] = item;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1; // Return an error value
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;
    return poppedItem;
}

int evaluatePostfix(char exp[]) {
    struct Stack stack;
    initialize(&stack);

    char numStr[10];
    int numIndex = 0;

    for (int i = 0; i < (int)strlen(exp); i++) {
        if (isspace(exp[i])) {
            continue;
        }

        if (isdigit(exp[i])) {
            numStr[numIndex++] = exp[i];
        } else {
            if (numIndex > 0) {
                numStr[numIndex] = '\0';
                push(&stack, atoi(numStr));
                numIndex = 0;
            }

            if (!isEmpty(&stack)) {
                int op2 = pop(&stack);
                int op1 = pop(&stack);
                switch (exp[i]) {
                    case '+':
                        push(&stack, op1 + op2);
                        break;
                    case '-':
                        push(&stack, op1 - op2);
                        break;
                    case '*':
                        push(&stack, op1 * op2);
                        break;
                    case '/':
                        push(&stack, op1 / op2);
                        break;
                }
            } else {
                printf("Invalid postfix expression\n");
                return -1;
            }
        }
    }

    if (numIndex > 0) {
        numStr[numIndex] = '\0';
        push(&stack, atoi(numStr));
    }

    if (isEmpty(&stack)) {
        printf("Invalid postfix expression\n");
        return -1;
    }

    return pop(&stack);
}

int main() {
    char exp[MAX_SIZE];
    printf("Enter a postfix expression: ");
    fgets(exp, sizeof(exp), stdin);
    exp[strcspn(exp, "\n")] = 0; // Remove the newline character

    int result = evaluatePostfix(exp);
    printf("Result: %d\n", result);

    return 0;
}