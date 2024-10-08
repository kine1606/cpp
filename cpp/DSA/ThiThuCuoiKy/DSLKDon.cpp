
#include <iostream>
#include <cmath>

using namespace std;
struct toaDo
{
    double m_x, m_y, m_z;
};
struct Node
{
    toaDo toaDoDiem;
    Node* pNext;
    Node()
    {
        toaDoDiem.m_x = 0;
        toaDoDiem.m_y = 0;
        toaDoDiem.m_z = 0;
        pNext = nullptr;
    }
    Node(double x, double y, double z)
    {
        toaDoDiem.m_x = x;
        toaDoDiem.m_y = y;
        toaDoDiem.m_z = z;
        pNext = nullptr;
    }
};
struct DSLKDon
{
    Node* head = nullptr;
    Node* tail = nullptr;
    void insert(double x, double y, double z)
    {
        Node* new_node = new Node(x,y,z);
        if(head == nullptr)
        {
            head = tail = new_node;
            return;
        }
        tail->pNext = new_node;
        tail = new_node;
    }
    void find(double a, double b, double c)
    {
        Node* new_node = new Node(a,b,c);
        Node* dummy = head;
        int count(0);
        while(dummy!=nullptr)
        {
            if(dummy->toaDoDiem.m_x == a && dummy->toaDoDiem.m_y == b && dummy->toaDoDiem.m_z == c)
            {
                std::cout<< count <<'\n';
                return;
            }   
            count++;
            dummy = dummy->pNext;
        }
        std::cout<< "KHONG" <<'\n';
        
    }
};

void run()
{
    DSLKDon myLinkedList;
    int n;
    std::cin>> n ;
    for (size_t i = 0; i < n; i++)
    {
        double a,b,c;
        std::cin>> a >> b >> c ;
        myLinkedList.insert(a,b,c);
    }
    int m;
    std::cin>> m ;
    for (size_t i = 0; i < m; i++)
    {
        double a,b,c;
        std::cin>> a >> b >> c ;
        myLinkedList.find(a,b,c);
    }
    
}
int main() {

	int * a = new int[256];
	int * b = new int[256];
	delete [] a;
	run();
	delete [] b;
}