#pragma once
struct Data
{
    int n;
    void set(int);
};
struct Node
{
    Data m_data;
    Node* pNext;
};
struct Linkedlist
{
    Node* head;
    Node* tail;
    bool isEmpty();
    void AddHead(Node*);
    void AddTail(Node*);
    void printNode();
    void AddNode(Node*, int);
    void insertNode(Node*, Node*);
    Node* getNodeAt(int);
};
Node* CreateNode(Data);