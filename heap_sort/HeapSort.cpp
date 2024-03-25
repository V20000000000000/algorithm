#include <iostream>
#include <vector>
#include "HeapSort.h"

using namespace std;

HeapSort::HeapSort()
{
    
};

void max_heapify(vector <int> &A, int i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest;

    if (l <= A.size() && A[l] > A[i])
        largest = l;
    else
        largest = i;

    if (r <= A.size() && A[r] > A[largest])
        largest = r;

    if (largest != i)
    {
        swap(A[i], A[largest]);
        max_heapify(A, largest);
    }

};