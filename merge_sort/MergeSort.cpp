#include <limits.h>
#include <iostream>

#include "MergeSort.h"

using namespace std;

void MergeSort::mergeSort(vector<int>& A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        merge(A, p, q, r);
    }else{
        return;
    }
};

void MergeSort::merge(vector<int>& A, int p, int q, int r)
{
    int nl = q - p + 1;
    int nr = r - q;
    vector<int> arrayL(nl + 1);
    vector<int> arrayR(nr + 1);

    copyArray(A, arrayL, arrayR, p, q, nl, nr);
    combineArray(A, arrayL, arrayR, p, q, r);
};

void MergeSort::copyArray(vector<int>& A, vector<int>& arrayL, vector<int>& arrayR, int p, int q, int nl, int nr)
{
    for (int i = 0; i < nl; i++)
    {
        arrayL[i] = A[p + i];
    }

    for (int j = 0; j < nr; j++)
    {
        arrayR[j] = A[q + 1 + j];
    }

    arrayL[nl] = INT_MAX;
    arrayR[nr] = INT_MAX;
};

void MergeSort::combineArray(vector<int>& A, vector<int>& arrayL, vector<int>& arrayR, int p, int q, int r)
{
    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++)
    {
        if (arrayL[i] <= arrayR[j])
        {
            A[k] = arrayL[i];
            i++;
        }
        else
        {
            A[k] = arrayR[j];
            j++;
        }
    }
};


