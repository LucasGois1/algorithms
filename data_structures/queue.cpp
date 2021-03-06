#include <iostream>
#include "structs.h"

using namespace std;

_queue * new_queue(int size) {
    _queue* queue = (_queue *) calloc(1, sizeof(QUEUE *));

    queue->data = (int *) malloc(size * sizeof(int));
    queue->size = size;
    queue->front = 0;
    queue->rear = 0;

    return queue;
}

bool empty(_queue* queue) {
    return (queue->rear - queue->front) <= 0;
}

bool fully(_queue* queue) {
    return (queue->rear - queue-> front) >= queue->size;
}

void enqueue(_queue* queue, int value) {
    if (fully(queue)) {
        cout << "Max itens reached" << endl;
        return;
    }

    queue->data[queue->rear++] = value;
}


int dequeue(_queue* queue) {
    if (empty(queue)) {
        cout << "queue is empty" << endl;
        exit(EXIT_FAILURE);
    }

    return queue->data[queue->front++];
}

int size(_queue* queue) {
    return queue->front + 1;
}
