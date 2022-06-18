#include <iostream>
#include "data_structures/structs.h"
#include "algorithms/search.h"
#include "algorithms/sort.h"

using std::cout;
using std::endl;
using std::cin;

void print_vet(int * vector, int length) {
    for(int i = 0; i < length; i++) {
        cout << vector[i] << endl;
    }
}

int main(int argc, char** argv) {
    int vector[] = {13, 6, 3, 9, 2, 4, 7, 1, 5};
    const size_t length = sizeof(vector) / sizeof(vector[0]);
    int* p = vector;

    shell_sort(p, length);

    print_vet(p, length);

    // _stack* test = new_stack(5);

    // push(test, 5);
    // push(test, 2);
    // push(test, 4);
    // push(test, 7);
    // push(test, 1);
    // push(test, 8); // full

    // cout << pop(test) << endl;
    // cout << pop(test) << endl;
    // cout << pop(test) << endl;
    // cout << pop(test) << endl;
    // cout << pop(test) << endl;
    // // cout << pop(test) << endl; // empty

    // _queue* test2 = new_queue(5);

    // enqueue(test2, 5);
    // enqueue(test2, 2);
    // enqueue(test2, 4);
    // enqueue(test2, 7);
    // enqueue(test2, 1);
    // enqueue(test2, 8); // full

    // cout << dequeue(test2) << endl;
    // cout << dequeue(test2) << endl;
    // cout << dequeue(test2) << endl;
    // cout << dequeue(test2) << endl;
    // cout << dequeue(test2) << endl;
    // // cout << dequeue(test2) << endl; // empty

    // int vector2[10] = {1, 22, 43, 55, 75, 86, 97, 158, 249, 610};
    // const size_t size2 = sizeof(vector2)/ sizeof(vector2[0]);
    // int * p2 = vector2;

    // int number;

    // cout << "select a number: ";
    // cin >> number;

    // if (binary_search(p2, size2, number)) {
    //     cout << "The number is in the vector -> Binary" << endl;
    // } else {
    //     cout << "The number is not in the vector -> Binary" << endl;
    // }

    // int number2;

    // cout << "select a number: ";
    // cin >> number2;

    // if (simple_search(p2, size2, number2)) 
    // {
    //     cout << "The number is in the vector -> Simple" << endl;
    // } 
    // else 
    // {
    //     cout << "The number is not in the vector -> Simple" << endl;
    // }
    
    return 0;
}