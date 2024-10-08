#include "LinkedList.h"
#include <iostream>

Node::Node(int value):m_value(value),pNext(nullptr),pPrv(nullptr){}
LinkedList::LinkedList():head(nullptr),tail(nullptr){}
void LinkedList::addHead(Node* new_node)
{
    if(head == nullptr)
    {
        head = tail = new_node;
    }
    else
    {
        head->pPrv = new_node;
        new_node->pNext = head;
        head = new_node;
    }
}
void LinkedList::addTail(Node* new_node)
{
    if(head == nullptr)
    {
        head = tail = new_node;
    }
    else
    {
        tail->pNext = new_node;
        new_node->pPrv = tail;
        tail = new_node;
    }
}
void LinkedList::addPos(Node* new_node, int pos)
{
    Node* dummy = head;
    Node* prvDummy = nullptr;
    while(pos--)
    {
        prvDummy = dummy;
        dummy = dummy->pNext;
    }
    if(prvDummy == nullptr)
    {
        addHead(new_node);
        return;
    }
    else if(dummy== nullptr)
    {
        addTail(new_node);
        return;
    }
    else
    {
        new_node->pNext = dummy->pNext;
        dummy->pNext->pPrv = new_node;
        dummy->pNext = new_node;
        new_node->pPrv = dummy;
    }
}
void LinkedList::deleteHead()
{
    if(head)
    {
        head->pNext->pPrv = nullptr;
        head = head->pNext;
    }
}
void LinkedList::deleteTail()
{
    if(head)
    {
        tail->pPrv->pNext = nullptr;
        tail = tail->pPrv;
    }
}
void LinkedList::deletePos(int pos)
{
    Node* dummy = head;
    while (pos--)
    {
        dummy = dummy->pNext;
    }
    dummy->pNext->pPrv = dummy->pPrv;
    dummy->pPrv->pNext = dummy->pNext;
}
LinkedList::~LinkedList()
{
    Node* dummy = head->pNext;
    while(dummy->pNext != nullptr)
    {
        delete dummy->pPrv;
        dummy->pPrv = nullptr;
        dummy = dummy->pNext;
    }
    delete dummy;
}