#include <iostream>
#include <vector>
double LOAD;
struct Node
{
    int m_value;
    Node* pNext = nullptr;
    Node(int value)
    {
        m_value = value;
        pNext = nullptr;
    }
};
struct LinkedList
{
    Node* head = nullptr;
    Node* tail = nullptr;
    void insert(int value)
    {   
        Node* new_node = new Node(value);
        if(head == nullptr)
        {
        std::cout<< "fine2" <<'\n';
            head = tail = new_node;
            return;
        }
        std::cout<< "fine3" <<'\n';
        tail->pNext = new_node;
        tail = new_node;
    }
    int find(int value)
    {
        int count(0);
        Node* dummy = head;
        while(dummy!=nullptr)
        {
            if(dummy->m_value = value) 
            {
                return count;
            }
            count++;
            dummy = dummy->pNext;
        }
        return -1;
    }
};

struct hashtable
{
    int m_M;
    int m_N = 0;
    LinkedList* m_vector;
    int hashFunc(int value)
    {
        return value % m_M;
    }
};

int main()
{
    hashtable myHashTable;
    int N;
    std::cin>> myHashTable.m_M >> LOAD >> N;
    for (size_t i = 0; i < N; i++)
    {
        int value;
        std::cin>> value;
        int key = myHashTable.hashFunc(value);
        std::cout<< "fine1" <<'\n';
        myHashTable.m_vector[key].insert(value);
        myHashTable.m_N++;
    }
    int m;
    std::cin>> m ;
    std::vector <int> outputVector;
    while(m--)
    {
        int valueN;
        std::cin>> valueN ;
        int key = myHashTable.hashFunc(valueN);
        outputVector.push_back(myHashTable.m_vector[key].find(valueN));
    }
    for (auto &&i : outputVector)
    {
        if(i == -1)
        {
            std::cout<< "KHONG" <<'\n';
            continue;
        }
        std::cout<< i <<'\n';
    }
    
}