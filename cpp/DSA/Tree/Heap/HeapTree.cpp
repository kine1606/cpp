#include "HeapTree.h"
#include <algorithm>
HeapTree::HeapTree()
{
    m_size = 0;
    m_arr[0]= 0;
}
HeapTree::HeapTree(int size)
{
    m_size = size;
    m_arr[0] = m_size+1;
}
bool HeapTree::isEmpty()
{
    if(m_size <=0) return true;
    return false;
}
int HeapTree::Peek(){return m_arr[1];}    //return root 
// void HeapTree::heapify()
// {

// }
void HeapTree::addValue(const int val)
{
    if(isEmpty())
    {
        m_size++;
        m_arr[1] = val;
        return;
    }
    else
    {
        m_size++;
        m_arr[m_size] = val;
        int currentIndex = m_size;
        int parrentIndex = m_size/2;
        // heapify up 
        while (parrentIndex!=0 && m_arr[currentIndex] > m_arr[parrentIndex])
        {
            std::swap(m_arr[currentIndex], m_arr[parrentIndex]);
            currentIndex = parrentIndex;
            parrentIndex = parrentIndex/2;
        }   
    }
}
void HeapTree::poll()
{
    std::swap(m_arr[1], m_arr[m_size]);
    int currentIndex = 1;
    int childIndex = 2;
    while (m_arr[currentIndex] < m_arr[childIndex])
    {
        
    }
    
}