#include <iostream>
#include "sort.h"

void insertion_sort(int * vector, int length) {

    for (int i = 1; i < length; i++) {
        int actual_value = vector[i];

        int j = i - 1;

        // Note: to be more easy to remember, think that is the array that move each element to foward, pushing on rear
        while ((j >= 0) && (actual_value < vector[j])) {
            vector[j + 1] = vector[j];
            j--;
        }

        vector[j + 1] = actual_value;
    }
}