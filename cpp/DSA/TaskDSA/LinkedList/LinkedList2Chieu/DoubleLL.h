#pragma once
class Node
{
public:
    int m_data;
    Node* m_pPrv;
    Node* m_pNext; 
public:
    Node();
    Node(int);
    ~Node();
};
class DoubleLinkedList
{
public:
    Node* head;
    Node* tail;
public:
    DoubleLinkedList();
    bool isEmpty();
    void addHead(Node*);
    void addTail(Node*);
    void addPos(int, Node*);
    void deleteHead();
    void deleteTail();
    void deletePos(int);
    
    ~DoubleLinkedList();
};
