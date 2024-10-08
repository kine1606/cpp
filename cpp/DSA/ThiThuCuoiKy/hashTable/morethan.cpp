#include <iostream>
#include <vector>
double LOAD;
struct Node
{
    int m_value;
    Node* pNext = nullptr;
    Node(int val)
    {
        m_value = val;
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
            head = tail = new_node;
            return;
        }
        tail->pNext = new_node;
        tail = new_node;
    }
    int find(int value)
    {
        int count(0);
        Node* dummy = head;
        while (dummy!= nullptr)
        {
            if(dummy->m_value == value)
                return count;
            count++;
            dummy = dummy->pNext;
        }
        return -1;
    }
};
struct hashTable
{
    int m_M;
    int m_N = 0;
    LinkedList* myHT;
    
    int HashFuc(int value)
    {
        return value % m_M;
    }
    void insert(int value)
    {
        if((static_cast<double> (m_N + 1) / m_M ) > LOAD) return;
        int key = HashFuc(value);
        // std::cout<< "KEY = " << key <<'\n';
        myHT[key].insert(value);
        // std::cout<< "Insert done" <<'\n';
    }
    void find(int value, std::vector<int>& vectorCheck)
    {
        int key = HashFuc(value);
        vectorCheck.push_back(myHT[key].find(value));
    }
    // void createHT()
    // {
    //     myHT
    // }
};
int main()
{
    hashTable myHashTable;
    int N;
    std::cin >> myHashTable.m_M >> LOAD >> N;
    myHashTable.myHT = new LinkedList[myHashTable.m_M];
    
    for (size_t i = 0; i < N; i++)
    {
        int num;
        std::cin>> num ;
        myHashTable.insert(num);
        myHashTable.m_N++;
    }
    int m;
    std::cin>> m ;
    std::vector<int> CheckValue;
    for (size_t i = 0; i < m; i++)
    {
        int num;
        std::cin >> num;
        myHashTable.find(num, CheckValue);
    }
    for (auto &&i : CheckValue)
    {
        if(i == -1) 
        {
            std::cout<< "KHONG" <<'\n';
            continue;
        }
        std::cout<< i+1 <<'\n';
    }
    
}

