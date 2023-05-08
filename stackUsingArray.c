#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top; // index of the top element in the stack
    char* data; // array to hold the elements
    int capacity; // maximum size of the stack
} Stack;

// function to push a character onto the stack
void push(Stack* stack, char c) {
    if (stack->top < stack->capacity) {
        stack->data[stack->top] = c;
        stack->top++;
    }
}

// function to pop a character from the stack
char pop(Stack* stack) {
    if (stack->top > 0) {
        stack->top--;
        return stack->data[stack->top];
    } else {
        return '\0'; // null character as an error indicator
    }
}

int main() {
    Stack stack;
    int size;
    char c;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);

    // initialize the stack
    stack.top = 0;
    stack.capacity = size;
    stack.data = (char*) malloc(size * sizeof(char));

    printf("Enter %d characters: ", size);
    for (int i = 0; i < size; i++) {
        scanf(" %c", &c); // skip leading whitespace
        push(&stack, c);
    }

    printf("Stack elements: ");
    while (stack.top > 0) {
        printf("%c ", pop(&stack));
    }
    printf("\n");

    free(stack.data);

    return 0;
}
