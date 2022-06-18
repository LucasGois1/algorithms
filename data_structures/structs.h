#ifndef STRUCTS
#define STRUCTS

typedef struct QUEUE {
    int front, rear, size;
    int * data;
} _queue;

_queue * new_queue(int size);

void enqueue(_queue* queue, int value);

int dequeue(_queue* queue);

typedef struct STACK {
    int top, size;
    int * data;
} _stack;

_stack * new_stack(int size);

void push(_stack* stack, int value);

int pop(_stack* stack);

#endif
