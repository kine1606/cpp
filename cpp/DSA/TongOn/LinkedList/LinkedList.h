#pragma once

class Node
{
public:
    int m_value;
    Node* pNext;
    Node* pPrv;
public:
    Node(int);
};
class LinkedList
{
public:
    Node* head;
    Node* tail;
public:
    void addHead(Node*);
    void addTail(Node*);
    void addPos(Node*, int);
    void deleteHead();
    void deleteTail();
    void deletePos(int);
    LinkedList();
    ~LinkedList();
};

