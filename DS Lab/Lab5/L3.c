/*
* case of no parenthesis
* we push symbols into the stack until an alpha is encountered
* then we pop symbols from the stack and add them to the output string
* 
*/ 

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
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
void postfix_to_infix(char exp[],struct Stack *sym,struct Stack *infix){
    int i, j = 0;
    for (i = 0; i < (int)strlen(exp); i++) {
        
        if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z')) {
            push(&infix,exp[i]);
            if(!isEmpty(&sym)){
                push(&infix,pop(&sym));
            }
        }
        else {
            push(&sym,exp[i]);
        }
    }
    while(!isEmpty(&infix)){
        printf("%c",pop(&infix));
    }

}

int main(){
    struct Stack sym;
    struct Stack infix;
    char s[MAX_SIZE];
    fgets(s, sizeof(s), stdin);
    postfix_to_infix(s,&sym,&infix);

    return 0;
}
//A+B*C-D
//ABC*+D-

