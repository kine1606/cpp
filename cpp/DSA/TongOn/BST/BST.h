#pragma once
class Node
{
public:
    int m_value;
    Node* pRight;
    Node* pLeft;
    Node(int);
};
class BST
{
public:
    Node* root;
public:
    BST();
    int height(Node*);
    void insertIterative(int);
    void insertRecursive(Node*, int);
    void erase(int);
    void find(int);
    void InOrderIterative();
    void InOrderRecursive(Node*);
    void PreOrderIterative();
    void PreOrderRecursive(Node*);
    void PostOrderIterative();
    void PostOrderRecursive(Node*);
    int countLeaf(Node*);
    int countNode_hasOneChild(Node*);
    int countNode_hasTwoChild(Node*);
    int countNode_HasOneChild(Node*);
    void BFS();
    ~BST();
};
