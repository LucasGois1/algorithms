#include <iostream>

using namespace std;

bool simple_search(int * vector, size_t size, int number) 
{
    for (int i = 0; i < size; i++)
    {
        if (vector[i] == number)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int vector[10] = {1, 22, 43, 14, 25, 6, 77, 58, 49, 610};
    const size_t size = sizeof(vector)/ sizeof(vector[0]);
    int * p = vector;

    int number;

    cout << "select a number: ";
    cin >> number;

    if (simple_search(p, size, number)) 
    {
        cout << "The number is in the vector" << endl;
    } 
    else 
    {
        cout << "The number is not in the vector" << endl;
    }
    
    return 0;
}