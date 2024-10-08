#include "HashTable.h"
#include <vector>
#include <string>
#include <iostream>

Node::Node()
{
    pNext = nullptr;
    m_key = m_value = "";
}

HashTable::HashTable(int size)
{
    my_HashTable.resize(size);
}
int HashTable::HashFunc(std::string key)
{
    // use DJB2 to generate key 
    int hash = 5381;
    for (size_t i = 0; i < key.length(); i++)
    {
        hash = ((hash*33) + key[i]) % my_HashTable.size();
    }
    return hash;
}
void HashTable::insert(std::string key, std::string value)
{
    int index = HashFunc(key);
    Node* new_Node = new Node;
    new_Node->m_key = key;  // init
    new_Node->m_value= value;   // init

    
    new_Node->pNext = my_HashTable[index];  
    my_HashTable[index] = new_Node;
}
std::string HashTable::find(std::string key)
{
    int index = HashFunc(key);
    Node* current = my_HashTable[index];
    while (current!= nullptr)
    {
        if(current->m_key == key)
        {
            return current->m_value;
        }
        current = current->pNext;
    }
    return "Khong tim thay";
}
void HashTable::erase(std::string key)
{
    int  index = HashFunc(key);
    Node* prvCurrent = nullptr;
    Node* current = my_HashTable[index];
    while(current!= nullptr)
    {
        if(current->m_key == key)
        {
            if(prvCurrent == nullptr)
                my_HashTable[index] = current->pNext;
            else
                prvCurrent->pNext = current->pNext;

            delete current;
            current = nullptr;
            return;
        }
        prvCurrent = current;
        current = current->pNext;
    }
    std::cout<< "Khong tim thay!" <<'\n';
}

void HashTable::print()
{
    for (size_t i = 0; i < my_HashTable.size(); i++)
    {
        Node* dummy = my_HashTable[i];
        while(dummy!= nullptr)
        {
            std::cout << "[" << i << "] " << dummy->m_key << ": " << dummy->m_value << '\n';
            dummy = dummy->pNext;
        }
    }
    
}