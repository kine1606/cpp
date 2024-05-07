#pragma once
class Node 
{
private:
    int m_value;
    Node* pLeft;
    Node* pRight;
public:
    Node();
    Node(int);
    ~Node();
};
class BST
{
private:
    Node* Root;
    
public:
    BST();
    ~BST();
};
