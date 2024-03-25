#include <iostream>
#include <vector>
#include <random>
#include "heapsort.h"


using namespace std;

int main ()
{
    const int size = 10;

    vector<int> arr(size);

    cout << "Unsorted array: " << endl;

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
        cout << arr[i] << " ";
    }

    cout << endl;

    HeapSort hs(arr);

    cout << "Sorted array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}