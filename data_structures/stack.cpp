#include <iostream>
#include "structs.h"

using namespace std;

_stack * new_stack(int size) {
    _stack* stack = (_stack *) calloc(1, sizeof(STACK *));

    stack->data = (int *) malloc(size * sizeof(int));
    stack->size = size;
    stack->top = -1;

    return stack;
}

bool empty(_stack* stack) {
    return stack->top == -1;
}

bool fully(_stack* stack) {
    return stack->top >= stack->size - 1;
}

void push(_stack* stack, int value) {
    if (fully(stack)) {
        cout << "Max itens reached" << endl;
        return;
    }

    stack->data[++stack->top] = value;
}


int pop(_stack* stack) {
    if (empty(stack)) {
        cout << "Stack is empty" << endl;
        exit(EXIT_FAILURE);
    }

    return stack->data[stack->top--];
}

int size(_stack* stack) {
    return stack->top + 1;
}