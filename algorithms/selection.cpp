#include <iostream>
#include "sort.h"

void selection_sort(int * vector, int length) {

    for (int i = 0; i < length; i++) {
        int lower_index = i;

        for (int j = i + 1; j < length; j++ ) {
            if (vector[j] < vector[lower_index]) {
                lower_index = j;
            }
        }

        if (lower_index != i) {
            int temp = vector[i];
            vector[i] = vector[lower_index];
            vector[lower_index] = temp;
        }
    }
}