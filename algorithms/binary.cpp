#include <iostream>
#include <cmath>

using namespace std;

bool binary_search(int * vector, size_t size, int number) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {   
        int mid = (int) floor((left + right) / 2);

        if (vector[mid] == number) {
            cout << "index of value: " << mid << endl;
            return true;
        }

        if (number < vector[mid]) {
            right = mid - 1;
            continue;
        } 

        left = mid + 1;
    }

    return false;
}