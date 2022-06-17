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

int main()
{
    int vector[10] = {1, 22, 43, 55, 75, 86, 97, 158, 249, 610};
    const size_t size = sizeof(vector)/ sizeof(vector[0]);
    int * p = vector;

    int number;

    cout << "select a number: ";
    cin >> number;

    if (binary_search(p, size, number)) {
        cout << "The number is in the vector." << endl;
    } else {
        cout << "The number is not in the vector." << endl;
    }
    
    return 0;
}