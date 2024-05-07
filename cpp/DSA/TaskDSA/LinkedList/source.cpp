#include <iostream>
#include "Linkedlist.h"
int main()
{
    int n;
    std::cin>> n ;
    Linkedlist List;
    for (size_t i = 0; i < n; i++)
    {
        int n;
        std::cin>> n ;
        Data alo;
        alo.set(n);
        Node* node = CreateNode(alo);
        List.AddHead(node);
    }
    List.printNode();
    std::cout << List.getNodeAt(1)->m_data.n

}