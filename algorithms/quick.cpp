#include <iostream>
#include <cmath>
#include "sort.h"

void quick_sort(int * vector, int init, int end) {

    int left = init;
    int right = end;

    int middle = (int) (left + right) / 2;
    int pivot = vector[middle];

    while (left <= right) {

        while (vector[left] < pivot && left < end) {
            left++;
        }

        while (vector[right] > pivot && right > init) {
            right--;
        }

        if (left <= right) {
            int temp = vector[left];
            vector[left] = vector[right];
            vector[right] = temp;

            left++;
            right--;
        }
    }

    if (right < init) {
        quick_sort(vector, init, right);
    }

    if (left < end) {
        quick_sort(vector, left, end);
    }

}