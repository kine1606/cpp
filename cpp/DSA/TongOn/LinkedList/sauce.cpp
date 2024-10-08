#include "LinkedList.h"
#include <iostream>
int main()
{
    LinkedList DLL;
    int n(10);
    for (size_t i = 0; i < n; i++)
    {
        Node* new_node = new Node(i);
        DLL.addTail(new_node);
    }
    Node* new_node1 = new Node(10);
    Node* new_node2 = new Node(20);
    DLL.addPos(new_node2, 3);
    DLL.addPos(new_node1, 5);
    Node* dummy = DLL.head;

    while (dummy!=nullptr)
    {
        std::cout<< dummy->m_value << " ";
        dummy = dummy->pNext;
    }
    std::cout <<'\n';
    DLL.deletePos(2);
    dummy = DLL.head;

    while (dummy!=nullptr)
    {
        std::cout<< dummy->m_value << " ";
        dummy = dummy->pNext;
    }
    DLL.deletePos(1);
    std::cout <<'\n';

    dummy = DLL.head;
    while (dummy!=nullptr)
    {
        std::cout<< dummy->m_value << " ";
        dummy = dummy->pNext;
    }
}