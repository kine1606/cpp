#include "DoubleLL.h"
#include <iostream>
Node::Node():m_data(0), m_pNext(nullptr), m_pPrv(nullptr){};
Node::Node(int data):m_data(data), m_pNext(nullptr), m_pPrv(nullptr){};
Node::~Node(){}

DoubleLinkedList::DoubleLinkedList()
{
    head = tail = nullptr;
}

bool DoubleLinkedList::isEmpty()
{
    return head == nullptr && tail == nullptr;
}
void DoubleLinkedList::addHead(Node* new_node)
{
    if(isEmpty())
    {
        head = tail = new_node;
        return;
    }
    else
    {
        head->m_pPrv = new_node;
        new_node->m_pNext = head;
        head = new_node;
    }
}
void DoubleLinkedList::addTail(Node* new_node)
{
    if(isEmpty())
    {
        head = tail = new_node;
        return;
    }
    else
    {
        tail->m_pNext = new_node;
        new_node->m_pPrv = tail;
        tail = new_node;
    }
}
void DoubleLinkedList::addPos(int pos, Node* new_node)
{
    Node* dummy = head;
    while(pos-- && dummy != nullptr)
    {
        dummy = dummy->m_pNext;
    }
    new_node->m_pNext = dummy;
    dummy->m_pPrv->m_pNext = new_node;
    new_node->m_pPrv = dummy->m_pPrv;
    dummy->m_pPrv = new_node;
}
void DoubleLinkedList::deleteHead()
{
    if(isEmpty()) return;
    else
    {
        head = head ->m_pNext;
        head->m_pPrv = nullptr;
    }
}
void DoubleLinkedList::deleteTail()
{
    if(isEmpty()) return;
    else
    {
        tail = tail->m_pPrv;
        tail->m_pNext = nullptr;
    }
}
void DoubleLinkedList::deletePos(int pos)
{
    Node* Dummy = head;
    while(pos--)
    {
        Dummy = Dummy->m_pNext;
    }
    Dummy->m_pPrv->m_pNext = Dummy->m_pNext;
    Dummy->m_pNext->m_pPrv = Dummy->m_pPrv;
    // delete Dummy;
}
DoubleLinkedList::~DoubleLinkedList()
{
    delete head, tail;
}