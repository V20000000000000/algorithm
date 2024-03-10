#include <iostream>
#include <vector>

#include "MergeSort.h"

int main()
{
    vector<int> A = { 5, 2, 4, 7, 1, 3, 2, 6 };
    MergeSort Sorting;

    Sorting.mergeSort(A, 0, A.size() - 1);

    cout << "Sorted array: " << endl;

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
}