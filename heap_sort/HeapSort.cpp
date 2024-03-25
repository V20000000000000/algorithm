#include <iostream>
#include <vector>
#include "HeapSort.h"

using namespace std;

void max_heapify(vector <int> &A, int i, int heap_size);
void build_max_heap(vector <int> &A);

HeapSort::HeapSort(vector<int> &A)
{
    build_max_heap(A);
    int heap_size = A.size();
    for (int i = A.size() - 1; i >= 1; i--)
    {
        swap(A[0], A[i]);
        heap_size--;
        max_heapify(A, 0, heap_size);
    }
};

HeapSort::~HeapSort()
{
};

void max_heapify(vector <int> &A, int i, int heap_size)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest;

    if (l <= heap_size-1 && A[l] > A[i])
        largest = l;
    else
        largest = i;

    if (r <= heap_size-1 && A[r] > A[largest])
        largest = r;

    if (largest != i)
    {
        swap(A[i], A[largest]);
        max_heapify(A, largest, heap_size);
    }
};

void build_max_heap(vector <int> &A)
{
    for (int i = A.size() / 2; i >= 0; i--)
        max_heapify(A, i, A.size()-1);
};

