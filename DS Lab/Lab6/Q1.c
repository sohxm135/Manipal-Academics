#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct Stack {
    char data[MAX];
    int top;
} Stack;

void createStack(Stack* stack) {
    stack->top = -1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, char data) {
    if (stack->top >= MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = data;
}

char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return '\0';
    }
    return stack->data[stack->top--];
}

char peek(Stack* stack) {
    if (isEmpty(stack)) {
        return '\0';
    }
    return stack->data[stack->top];
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void reverseString(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    str[length] = '\0';
}

void replaceParentheses(char* expr) {
    int i = 0;
    while (expr[i] != '\0') {
        if (expr[i] == '(') {
            expr[i] = ')';
        } else if (expr[i] == ')') {
            expr[i] = '(';
        }
        i++;
    }
}

int isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void infixToPostfix(char* infix, char* postfix) {
    Stack stack;
    createStack(&stack);
    int k = 0;
    
    for (int i = 0; infix[i] != '\0'; i++) {
        if (isOperand(infix[i])) {
            postfix[k++] = infix[i];
        } else if (infix[i] == '(') {
            push(&stack, infix[i]);
        } else if (infix[i] == ')') {
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                postfix[k++] = pop(&stack);
            }
            pop(&stack); // Remove '('
        } else {
            while (!isEmpty(&stack) && precedence(peek(&stack)) >= precedence(infix[i])) {
                postfix[k++] = pop(&stack);
            }
            push(&stack, infix[i]);
        }
    }
    
    while (!isEmpty(&stack)) {
        postfix[k++] = pop(&stack);
    }
    
    postfix[k] = '\0';
}

void infixToPrefix(char* infix, char* prefix) {
    char reversedInfix[MAX];
    char postfix[MAX];
    
    strcpy(reversedInfix, infix);
    reverseString(reversedInfix);
    replaceParentheses(reversedInfix);
    
    infixToPostfix(reversedInfix, postfix);
    
    reverseString(postfix);
    strcpy(prefix, postfix);
}

int main() {
    char infix[MAX];
    char prefix[MAX];
    
    printf("Enter infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0'; // Remove newline character
    
    infixToPrefix(infix, prefix);
    
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
