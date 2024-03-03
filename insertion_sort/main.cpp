#include <iostream>
#include <vector>
#include <random>
#include "Sort.h"

using namespace std;

int main()
{
    //static array
    int array[] = {5, 2, 4, 6, 1, 3};
    Sorting :: sort(array);

    cout << "static array: ";
    for(int val : array)
    {
        cout << val << " ";
    }
    cout << endl;

    //vector
    vector <int> vec  = {5, 2, 4, 6, 1, 3};
    Sorting :: sort(vec);

    cout << "vector: ";
    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    //dynamic array
    int size = 10;
    int *dynamicArray = new int[size];

    //random number generator
    random_device rd;   //创建一个随机数引擎(產生seed)
    mt19937 gen (rd()); // 使用 Mersenne Twister 引擎(用seed初始化這個引擎)
    uniform_int_distribution<> dis(1, 100); // 生成 [1, 100] 范围内的均匀分布的随机数
    
    for(int i = 0; i < size; i++)
    {
        dynamicArray[i] = dis(gen);
    }

    Sorting :: sort(dynamicArray, size);

    cout << "dynamicArray: ";
    for(int i = 0; i < size; i++)
    {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    cout << "Done!!!" << endl;
    return 0;
}