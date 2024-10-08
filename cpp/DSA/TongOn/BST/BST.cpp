#include "BST.h"
#include <iostream>
#include <stack>
#include <queue>
#include <vector>


Node::Node(int value):m_value(value),pLeft(nullptr),pRight(nullptr){}
BST::BST():root(nullptr){}
void BST::insertIterative(int value)
{

    if(root == nullptr)
    {
        root = new Node(value);
        return;
    }
    Node* dummy = new Node(value);
    while(true)
    {
        if(dummy->m_value < value)
        {
            if(dummy->pRight == nullptr)
            {
                dummy->pRight = new Node(value);
                return;
            }
            dummy = dummy->pRight;
        }
        else
        {
            if(dummy->pLeft == nullptr)
            {
                dummy->pLeft = new Node(value);
                return;
            }
            dummy = dummy->pLeft;
        }
    }
}
void BST::insertRecursive(Node* current, int value)
{
    if(current == nullptr)
    {
        current = new Node(value);
        return;
    }
    if(current->m_value < value) insertRecursive(current->pRight, value);
    else if(current->m_value > value) insertRecursive(current->pLeft, value);
}
void BST::find(int find_value)
{
    Node* dummy = root;
    while(dummy!= nullptr)
    {
        if(dummy->m_value < find_value)
            dummy = dummy->pRight;
        else if(dummy->m_value > find_value)
            dummy = dummy->pLeft;
        else 
        {
            std::cout<< "Tim thay gia tri'" << find_value << "' trong cay" <<'\n';
            return;
        }
    }
    std::cout<< "Khong tim thay gia tri'" << find_value << "' trong cay" <<'\n';
}
void BST::PreOrderRecursive(Node* current)
{
    // NLR
    if(current!= nullptr)
    {
        std::cout<< current->m_value << " ";
        PreOrderRecursive(current->pLeft);
        PreOrderRecursive(current->pRight);
    }
}
void BST::PreOrderIterative()
{
    // NLR
    if(root == nullptr) return;
    std::stack<Node*> myStack;
    myStack.push(root);
    while(!myStack.empty())
    {
        Node* dummy = myStack.top();
        myStack.pop(); 
        std::cout<< dummy->m_value << " ";
        if(dummy->pRight != nullptr) myStack.push(dummy->pRight);
        if(dummy->pLeft != nullptr) myStack.push(dummy->pLeft);
    }
}
void BST::InOrderRecursive(Node* current)
{
    if(current!=nullptr)
    {
        InOrderRecursive(current->pLeft);
        std::cout<< current->m_value <<" ";
        InOrderRecursive(current->pRight);
    }
}
void BST::InOrderIterative()
{
    std::stack <Node*> myStack;
    myStack.push(root);
    while (!myStack.empty())
    {
        Node* dummy = myStack.top();
        myStack.pop();
        if(dummy->pRight != nullptr) myStack.push(dummy->pRight);
        std::cout<< dummy->m_value << " ";
        if(dummy->pLeft != nullptr) myStack.push(dummy->pLeft);
    }
}
void BST::BFS()
{
    std::queue<Node*> myQueue;
    myQueue.push(root);
    while (!myQueue.empty())
    {
        Node* dummy = myQueue.front();
        myQueue.pop();
        std::cout<< dummy->m_value << " ";
        if(dummy->pLeft!=nullptr) myQueue.push(dummy->pLeft);
        if(dummy->pRight!=nullptr) myQueue.push(dummy->pRight);
    }
}
void BST::PostOrderRecursive(Node* current)
{
    if (current!=nullptr)
    {
        PostOrderRecursive(current->pLeft);
        PostOrderRecursive(current->pRight);
        std::cout<< current->m_value << " ";
    }
}
void BST::PostOrderIterative()
{
    std::stack<Node*> myStack;
    std::stack<Node*> outputStack;
    myStack.push(root);
    while (!myStack.empty())
    {
        Node* dummy = myStack.top();
        myStack.pop();
        if(dummy->pLeft != nullptr) outputStack.push(dummy->pLeft);
        if(dummy->pRight != nullptr) outputStack.push(dummy->pRight);
    }
    while(!outputStack.empty())
    {
        std::cout<< outputStack.top()->m_value << " ";
        outputStack.pop();
    }
}
int BST::height(Node* current)
{
    if(current == nullptr) return 0;
    int HeightLeft = height(current->pLeft);
    int HeightRight = height(current->pRight);
    if(HeightLeft > HeightRight) return 1 + HeightLeft;
    return 1+ HeightRight;
}

int BST::countLeaf(Node* current)
{
    if(current == nullptr) return 0;
    if(current->pLeft == nullptr && current->pRight == nullptr) return 1;
    return countLeaf(current->pLeft) + countLeaf(current->pRight);
}

int BST::countNode_HasOneChild(Node* current)
{ 
    if(current == nullptr) return 0;
    if(current->pLeft==nullptr && current->pRight!=nullptr || current->pLeft!=nullptr && current->pRight==nullptr)
        return 1;
    return countNode_HasOneChild(current->pLeft) + countNode_HasOneChild(current->pRight);
}

int BST::countNode_hasTwoChild(Node* current)
{
    if(current == nullptr) return 0;
    if(current->pLeft != nullptr && current->pRight != nullptr) return 1;
    return countLeaf(current->pLeft) + countLeaf(current->pRight);
}

int BST::height(Node* current)
{
    if(current == nullptr) return 0;
    int leftHeight = height(current->pLeft);
    int rightHeight = height(current->pRight);
    if(leftHeight < rightHeight) return leftHeight + 1;
    return rightHeight + 1 ;
}