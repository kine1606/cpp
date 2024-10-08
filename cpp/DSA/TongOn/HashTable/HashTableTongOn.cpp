#include "HashTableTongOn.h"
#include <vector>
#include <iostream>

Node::Node(std::string word, std::string mean):m_word(word),m_mean(mean),pNext(nullptr){}
int HashTable::HashFunction(std::string word)
{
    int hash = 5381;
    for (size_t i = 0; word[i] != '\0'; i++)
    {
        hash = ((hash*33) + word[i]) % myHT.size();
    }
    return hash;
}
HashTable::HashTable() = default;
HashTable::HashTable(int x)
{
    myHT.resize(x);
    for (size_t i = 0; i < myHT.size(); i++)
    {
        myHT[i] = new LinkedList;
    }    
}

void HashTable::insertWord(std::string word, std::string mean)
{
    int key = HashFunction(word);
    Node* temp = new Node(word, mean);
    if(myHT[key]->head == nullptr)
    {
        myHT[key]->head = temp;
        myHT[key]->tail = temp;
    }
    else
    {
        myHT[key]->tail->pNext = temp;
        myHT[key]->tail = temp;

    }
}
void HashTable::deleteWord(std::string word)
{
    int key = HashFunction(word);
    Node* current = myHT[key]->head;
    Node* prvCurrent = nullptr;
    while (current)
    {
        if(current->m_word == word)
        {
            if(prvCurrent == nullptr)
            {
                myHT[key]->head = current->pNext;
                return;
            }
            else
            {
                prvCurrent->pNext = current->pNext;
                return;
            }
            prvCurrent = current;
            current = current->pNext;
        }
    }
    std::cout<< "Khong tim thay '" << word << "' de xoa!" <<'\n';
}
std::string HashTable::find(std::string word)
{
    int key = HashFunction(word);
    Node* dummy = myHT[key]->head;
    while(dummy)
    {
        if(dummy->m_word == word)
        {
            return dummy->m_mean;
        }
        dummy = dummy->pNext;
    }
    return "not found!";
}
void HashTable::print()
{
    for (size_t i = 0; i < myHT.size(); i++)
    {
        Node* dummy = myHT[i]->head;
        while (dummy)
        {
            std::cout<< dummy->m_word<< ": " << dummy->m_mean <<'\n';
            dummy= dummy->pNext;
        }
    }
    
}
HashTable::~HashTable()
{
    for (size_t i = 0; i < myHT.size(); i++)
    {
        while(myHT[i]->head)
        {
            Node* dummy = myHT[i]->head;
            myHT[i]->head = dummy->pNext;
            delete dummy;
            dummy = nullptr;
        }
    }
}