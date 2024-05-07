#include "Linkedlist.h"
#include <iostream>
void Data::set(int n)
{
    this->n = n;
}
Node* CreateNode(Data data)
{
    // temp node used to return value Node*
    Node* temp = new Node;      
    if(temp==nullptr) return nullptr;
    else 
    {
        temp->m_data = data;
        temp->pNext = nullptr;
    }
    return temp;
}
bool Linkedlist::isEmpty()
{
    if(head == nullptr && tail == nullptr)  return true;
    return false;
}

void Linkedlist::AddHead(Node* new_node)    //pushfront
{
    if(isEmpty())
    {
        // if empty : head and tail point to new_node (1 element)
        head = tail = new_node;
    }
    else 
    {
        // new_node is added to head pos so new_node->pNext = head
        // head now changed and point to new_node
        new_node->pNext = head;
        head = new_node;   
    }
}
void Linkedlist::printNode()
{
    Node* dummy = head; 
    while(dummy!= nullptr)
    {
        std::cout<< dummy->m_data.n << " ";
        dummy = dummy->pNext;   // <=> same with i++;
    }
}
void Linkedlist::AddTail(Node* new_node)
{
    if(isEmpty())
    {
        // if empty : head and tail point to new_node (1 element)
        head = tail = new_node;
    }

    else 
    {
        tail->pNext = new_node; // pointer of Tail POINTED pNext points to new_node; 
        tail = new_node;    // change tail 
    }
}


// insert new node after node* q
// ex : a b q x e , new node is z;
// => a b q z x e
void Linkedlist::insertNode(Node* q, Node* new_node)
{
    new_node->pNext = q->pNext; // q->pNext = x , new_node point to x 
    q->pNext = new_node;    // q->pNext point to new_node
}   

Node* Linkedlist::getNodeAt(int index)
{
    if(isEmpty() || index < 0) return nullptr;
    else 
    {
        int count(0);
        Node* temp = head;
        while(count< index)
        {
            temp = temp->pNext;
            count++;
        }
        return temp;
    } 
}
void Linkedlist::AddNode(Node* new_node, int pos)
{
    int count(1);
    Node* temp = head;
    // find pos 
    while(count < pos)
    {
        temp = temp->pNext;
        count++;
    }
    new_node->pNext = temp;

}