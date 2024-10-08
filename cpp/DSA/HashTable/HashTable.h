#pragma once
#include <vector>
#include <string>
class Node
{
public:
    std::string m_value;
    std::string m_key;
    Node* pNext;
public:
    Node();
};

class HashTable
{
private:
    std::vector<Node*> my_HashTable;
    int HashFunc(std::string key);  
public:
    HashTable(int); // init HashTable 
    void insert(std::string, std::string);
    std::string find(std::string);
    void print();
    void erase(std::string);
};
