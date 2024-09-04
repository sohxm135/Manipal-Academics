#include <stdio.h>
#include <stdbool.h>
#include<string.h>
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




int main(){
    struct Stack palin;
    char s[100],s1[100];
    printf("Enter a string:\n");
    gets(s);
    initialize(&palin);
    for(int i=0;s[i]!='\0';i++){
        push(&palin,s[i]);
    }
    for(int i=0;s[i]!='\0';i++)
        s1[i]=pop(&palin);
    printf(strcmp(s,s1)==0?"PALINDROME!!":"NOT PALINDROME");

    return 0;
}