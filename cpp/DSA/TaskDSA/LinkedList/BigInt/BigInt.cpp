#include "BigInt.h"
#include <iostream>
Node::Node(){pNext = nullptr;}
Node::Node(std::string data):m_value(data),pNext(nullptr){};
Node::~Node(){}

bool LinkedList::isEmpty()
{
    if(head == nullptr && tail == nullptr) return true;
    return false;
}
void LinkedList::addHead(Node* rhsNode) // right handside 
{   
    if(isEmpty()) 
    {
        head = rhsNode;
        tail = rhsNode;
    }
    else{
        rhsNode->pNext = head;
        head = rhsNode;
    }
}
void LinkedList::printList()
{
    Node* dummy = head;
    while (dummy!= nullptr)
    {
        std::cout<< dummy->m_value  << " ";
        dummy = dummy->pNext;
    }
}
int LinkedList::plusBigInt(const char& left, const char& right)
{
    
}