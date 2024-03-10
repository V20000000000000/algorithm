#include <iostream>
#include <vector>

#include "MergeSort.h"

int main()
{
    vector<int> A = { 8, 4, 7, 1, 3, 2, 6, 5 };
    MergeSort Sorting;

    Sorting.mergeSort(A, 1, A.size());

    cout << "Sorted array: " << endl;
    
    for (unsigned int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    
    system("pause");
}