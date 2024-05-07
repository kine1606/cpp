#pragma once
#define MAXN 1000
class HeapTree
{
public:
    int m_arr[MAXN];
    int m_size;
public:
    HeapTree();
    HeapTree(int);
    bool isEmpty();
    int Peek();
    void addValue(const int);   // add element
    void deleteValue(const int);
    void heapify(); //  convert a arbitrary array into a valid Heap
    // void search(int);  // search element and return its index
    void poll();    // remove root and return its value
    ~HeapTree();
};
