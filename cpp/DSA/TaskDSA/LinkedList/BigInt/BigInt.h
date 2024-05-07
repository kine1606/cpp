#pragma once
#include <string>

class Node
{
public:
    std::string m_value;
    Node* pNext;
public:
    Node();
    Node(std::string);
    ~Node();
};
class LinkedList
{
private:
    Node* head;
    Node* tail;
public:
    bool isEmpty();
    void addHead(Node*);
    void printList();
    int plusBigInt(const char&, const char& );
};