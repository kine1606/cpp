#include <iostream>
#include <vector>
class Node
{
public:
    int m_value;
    Node* pNext;
public:
    Node():m_value(0), pNext(nullptr){}
    Node(int x):m_value(x), pNext(nullptr){}
};
class linkedList
{
public:
    Node* head;    
public:
    linkedList(): head(nullptr){}
};
class hashtable
{
public:
    std::vector<linkedList> ht;
    int M;
public:
    hashtable() = default;
    void create()
    {
        std::cin>> M ;
        ht.resize(M);
    }
    int hashFunc(int key)
    {
        return key%M;
    }
    void addVal(int key)
    {
        int m_key = hashFunc(key);
        Node* dummy = new Node(key);
        if(ht[m_key].head == nullptr)
        {
            ht[m_key].head = dummy;
            return;
        }
        dummy->pNext = ht[m_key].head;
        ht[m_key].head = dummy;
    }
    void print()
    {
        for (size_t i = 0; i < M; i++)
        {
            Node* dummy = ht[i].head;
            std::cout<< i << ". ";
            while(dummy)
            {
                std::cout<< dummy->m_value << " ";
                dummy = dummy->pNext;
            }
            std::cout <<'\n';
        }
    }
    void find(int key)
    {
        int m_key = hashFunc(key);
        Node* dummy = ht[m_key].head;
        while(dummy)
        {
            if(dummy->m_value == key)
            {
                std::cout<< "Tim thay " << key << " trong bang bam!" <<'\n';
                return;
            }
            dummy = dummy->pNext;
        }
        std::cout<< "Khong tim thay " << key << " trong bang bam!" <<'\n';
    }
};
int main()
{
    hashtable myHash;
    myHash.create();
    myHash.addVal(14);
    myHash.addVal(16);
    myHash.addVal(15);
    myHash.addVal(17);
    myHash.addVal(18);
    myHash.addVal(19);
    myHash.addVal(12);
    myHash.print();
    myHash.find(12);
    myHash.find(21);
    myHash.find(23);
    myHash.find(18);
}