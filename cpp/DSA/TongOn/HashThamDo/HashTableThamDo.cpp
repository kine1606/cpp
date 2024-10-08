#include "HashTableThamDo.h"
Data::Data() = default;
Data::Data(std::string value, std::string key):m_value(value),m_key(key){}
int HashTableThamDo::HashFunc(std::string key)
{
    int hash = 5381;
    for (size_t i = 0; key[i] != '\0'; i++)
    {
        hash = ((hash*33) + key[i]) % m_MaxSize;
    }
    return hash;
}
void HashTableThamDo::CreateHashTable(int size)
{
    m_HashTable = new Data[size];
    for (size_t i = 0; i < size; i++)
    {
        m_HashTable->m_key = EMPTY;
    }
    
    m_MaxSize = size;
    m_current = 0;    
}
HashTableThamDo::HashTableThamDo():m_HashTable(nullptr),m_MaxSize(0),m_current(0){}
void HashTableThamDo::insert(std::string value, std::string key)
{
    int kkey = HashFunc(key);
    int i(0);
    while(true)
    {
        std::string temp = m_HashTable[(kkey*m_MaxSize + i*i) % m_MaxSize].m_key;
        if(temp == EMPTY || temp == DELETED) break;
        i++;
    }
    m_HashTable[(kkey*m_MaxSize + i*i) % m_MaxSize] = Data(value, key);
    m_current++;
}
void HashTableThamDo::erase(std::string key)
{
    int kkey = HashFunc(key);
    int i(0);
    while(true)
    {
        std::string temp = m_HashTable[(kkey*m_MaxSize + i*i) % m_MaxSize].m_key;
        if(temp == key) break;
        else if(temp == EMPTY) return;
        i++;
    }
    m_HashTable[(kkey*m_MaxSize + i*i) % m_MaxSize].m_key = DELETED;
    m_current--;
}