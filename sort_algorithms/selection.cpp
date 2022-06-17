#include <iostream>

using namespace std;

void sort(int * vector, int length) {

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

int main () {

    int vector[] = {13, 6, 3, 9, 2, 4, 7, 1};
    const size_t length = sizeof(vector) / sizeof(vector[0]);
    int* p = vector; 

    sort(vector, length);

    for(int i = 0; i < length; i++) {
        cout << vector[i] << endl;
    }
    return 0;
}