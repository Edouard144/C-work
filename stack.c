#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Maximum size of the stack

int stack[MAX];
int top = -1;

// Function to add an element to the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

// Function to remove an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Function to view the top element of the stack
int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element is %d\n", peek());
    printf("Stack size is %d\n", top + 1);

    printf("Popped element is %d\n", pop());
    printf("Popped element is %d\n", pop());
    printf("Popped element is %d\n", pop());

    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
