#ifndef SORT_H
#define SORT_H

#include <vector>
#include <cstddef>

namespace Sorting
{
    //for static arrays
    template <typename T, size_t N> 
    void sort(T (&array)[N]);
    /* 数组的大小是作为数组类型的一部分传递给函数的，因此在调用函数时不需要额外传递数组的大小。
    这种方式适用于编译时已知数组大小的情况，比如静态数组。*/

    // for vectors
    template <typename T>
    void sort(std:: vector<T> &vec);

    //for dynamic arrays
    template <typename T>
    void sort(T *array, size_t N);
} 

//for static arrays
template <typename T, size_t N>
void Sorting :: sort(T (&array)[N])
{
    for(size_t j = 1; j < N; j++)
    {
        T key = array[j];
        size_t i = j - 1;
        while((i >= 0) && (array[i] > key))
        {
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i+1] = key;
    }
}

//for vectors
template <typename T>
void Sorting :: sort(std::vector<T> &vec)
{
    for(size_t j = 1; j < vec.size(); j++)
    {
        T key = vec[j];
        size_t i = j - 1;
        while((i >= 0) && (vec[i] > key))
        {
            vec[i+1] = vec[i];
            i = i - 1;
        }
        vec[i+1] = key;
    }
}

// for dynamic arrays
template <typename T>
void Sorting :: sort(T *array, size_t N)
{
    for(size_t j = 1; j < N; j++)
    {
        T key = array[j];
        size_t i = j - 1;
        while((i >= 0) && (array[i] > key))
        {
            array[i+1] = array[i];
            i = i - 1;
        }
        array[i+1] = key;
    }
}

#endif