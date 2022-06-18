#include <iostream>
#include "sort.h"
#define FACTOR 3

using namespace std;

// void print_vet(int * vector, int length) {
//     for(int i = 0; i < length; i++) {
//         cout << vector[i] << " | ";
//     }

//     cout << endl;
// }

void shell_sort(int * vector, int length) {

    int jump;

    // calculating the best jump distance for the array length

    while (jump < length) {
        jump = jump * FACTOR + 1;
    }
    jump = jump / FACTOR;

    // sorting the array
    int actual_value, i;

    while (jump > 0) {
        for (i = jump; i < length; i++) {
            actual_value = vector[i];

            // while the actual value is smaller than the element i - jump, switch them
            while ((i > jump - 1) && actual_value <= vector[i - jump]) {
                vector[i] = vector[i - jump];
                i = i - jump;
            }

            // move the actual value to the index
            vector[i] = actual_value;
        }
        
        // decreasing the jump distance
        jump = jump / FACTOR;
    }
}
