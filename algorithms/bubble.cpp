#include <iostream>
#include "sort.h"

void bubble_sort(int * vector, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (vector[i] > vector[j] ) {
                int temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}