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