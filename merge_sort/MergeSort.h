#ifndef MAERGESORT_H
#define MAERGESORT_H

#include <vector>

using namespace std;

class MergeSort
{
public:
    void mergeSort(vector<int>& A, int p, int r);
    void merge(vector<int>& A, int p, int q, int r);
    void copyArray(vector<int>& A, vector<int>& arrayL, vector<int>& arrayR, int p, int q, int nl, int nr);
    void combineArray(vector<int>& A, vector<int>& arrayL, vector<int>& arrayR, int p, int q, int r);
};

#endif