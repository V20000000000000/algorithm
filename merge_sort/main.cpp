#include <iostream>
#include <vector>

#include "MergeSort.h"

int main()
{
    vector<int> A = { 8, 4, 7, 1, 3, 2, 6, 5 , 9, 15, 12, 11, 10, 14, 13};
    MergeSort Sorting;
    cout << "A size: " << A.size() << endl;
    Sorting.mergeSort(A, 0, A.size() - 1);

    cout << "Sorted array: " << endl;
    
    for (unsigned int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    
    system("pause");
}