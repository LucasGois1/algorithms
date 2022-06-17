#include <iostream>

using namespace std;

void sort(int * vector, int length) {

    for (int i = 1; i < length; i++) {
        int actual_value = vector[i];

        int j = i - 1;

        while ((j >= 0) && (actual_value < vector[j])) {
            vector[j + 1] = vector[j];
            j--;
        }

        vector[j + 1] = actual_value;
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