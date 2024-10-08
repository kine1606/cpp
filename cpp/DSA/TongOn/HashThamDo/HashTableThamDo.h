#pragma once 
#include <string>
#define DELETED "-1"
#define EMPTY "0"
#define LOAD 0.75
// ham bac 2 : (key*maxSize + i*i) % MaxSize
class Data
{
public:
    std::string m_value;
    std::string m_key;
    Data();
    Data(std::string, std::string);
};
class HashTableThamDo
{
public:
    int m_MaxSize;
    int m_current;
    Data* m_HashTable;
public:
    HashTableThamDo();
    void CreateHashTable(int);
    int HashFunc(std::string);
    void insert(std::string, std::string);
    void erase(std::string);
    ~HashTableThamDo();
};
