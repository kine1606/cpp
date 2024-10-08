#pragma once
class Node
{
public:
    int m_value;
    Node* pRight;
    Node* pLeft;
    int m_height;
public:
    Node();
    Node(int);
};

class AVL_Tree
{
public:
    Node* root;
public:
    AVL_Tree();
    void preOrder(Node*);
    bool isEmpty();
    Node* leftRotate(Node*);
    Node* rightRotate(Node*);
    void rotateLL(AVL_Tree&);
    int height(Node*);
    int getBalance(Node*);
    Node* insert(Node*, int x);
    ~AVL_Tree();
};
