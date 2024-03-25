#include <iostream>
#include <vector>
#include <random>
#include "heapsort.h"


using namespace std;

int main ()
{
    const int size = 10;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
        cout << arr[i] << endl;
    }
}