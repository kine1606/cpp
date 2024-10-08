#include "AVL.h"
#include <iostream>
Node::Node() = default;
Node::Node(int value)
{
    m_value = value;
    m_height = 1;
    pLeft = pRight = nullptr;   
}
AVL_Tree::AVL_Tree():root(nullptr){}
AVL_Tree::~AVL_Tree()
{
    std::cout << "Delete AVL_Tree" <<'\n';
    delete root;
    root = nullptr;
}
void AVL_Tree::preOrder(Node* current)
{
    if(current!= nullptr)
    {
        std::cout<< current->m_value << " ";
        preOrder(current->pLeft);
        preOrder(current->pRight);
    }
}
int AVL_Tree::height(Node* node)
{
    if (node == nullptr) return 0;
    return node->m_height;
}
int max (int a, int b)
{
    return (a>b)? a : b;
}
int AVL_Tree::getBalance(Node* node)
{
    if(node == nullptr) return 0;
    return height(node->pLeft) - height(node->pRight);          
    // -> if left > right => >1 : left case
    // if left < right => < -1 : right case 
}
bool AVL_Tree::isEmpty()
{
    if (root == nullptr) return true;
    return false;
}

Node* AVL_Tree::leftRotate(Node* x)
{
    Node* y = x->pRight;
    Node* temp = y->pLeft;
    y->pLeft = x;
    x->pRight = temp;
    x->m_height = max(height(x->pLeft), height(x->pRight)) + 1;
    y->m_height = max(height(y->pLeft), height(y->pRight)) + 1;
    return y;
}
Node* AVL_Tree::rightRotate(Node* y)
{
    Node* x = y->pLeft;
    Node* temp = x->pRight;
    x->pRight = y;
    y->pLeft = temp;
    y->m_height = max(height(y->pLeft), height(y->pRight)) + 1;
    x->m_height = max(height(x->pLeft), height(x->pRight)) + 1;
    return x;
}
Node* AVL_Tree::insert(Node* dummy, int x)
{
    if(isEmpty())
    {
        root = dummy;
        return;
    }
    if(dummy->m_value < x) dummy->pRight = insert(dummy->pRight, x);
    else if(dummy->m_value > x) dummy->pLeft = insert(dummy->pLeft, x);
    else return dummy;

    dummy->m_height = max(height(dummy->pLeft), height(dummy->pRight)) + 1;
    int balance = getBalance(dummy);
    // Left Left
    if(balance > 1 && x < dummy->pLeft->m_value)
    {
        return rightRotate(dummy);
    }
}