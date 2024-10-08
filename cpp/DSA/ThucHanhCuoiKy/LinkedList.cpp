#include <iostream>
#define MAXN 10000
void quicksort(int arr[MAXN], int n, int left, int right)
{
    if(left >= right) return;
    int i = left;
    int j = right;
    int pivot = arr[(i+j)/2];
    while(i<=j)
    {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;
        if(i<=j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quicksort(arr, n, left, j);
    quicksort(arr, n, i, right);
}
class Node
{
public:
    int m_value;
    Node* pPrv = nullptr;
    Node* pNext = nullptr;
public:
    Node()
    {
        pNext = pPrv = nullptr;
    }
    Node(int x)
    {
        m_value = x;
        pNext = pPrv = nullptr;
    }
};
class LinkedList
{
public:
    Node* head;
    Node* tail;
public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    void addHead(int x)
    {
        if(head == nullptr)
        {
            head = tail = new Node(x);
        }
        else
        {
            Node* dummy = new Node(x);
            dummy->pNext = head;
            head->pPrv = dummy;
            head = dummy;
        }
    }
    void addTail(int x)
    {
        if(head == nullptr)
        {
            head = tail = new Node(x);
        }
        else
        {
            Node* dummy = new Node(x);
            tail->pNext = dummy;
            dummy->pPrv = tail;
            tail = dummy;
        }
    }
    void addPos(int x, int pos)
    {
        Node* cur = head;
        Node* dummy = new Node(x);
        while(pos--)
        {
            cur = cur->pNext;
        }
        dummy->pNext = cur->pNext;
        cur->pNext->pPrv = dummy;
        dummy->pPrv = cur;
        cur->pNext = dummy;
    }
    void find(int x)
    {
        Node* dummy = head;
        int count(1);
        while(dummy != nullptr)
        {
            if(dummy->m_value == x)
            {
                std::cout<< "found x at " << count <<'\n';
                return;
            }
            count++;
            dummy = dummy->pNext;
        }
        std::cout<< "not found x!" <<'\n';
    }
    void printLL()
    {
        Node* dummy = head;
        while(dummy != nullptr)
        {
            std::cout<< dummy->m_value << " ";
            dummy= dummy->pNext;
        }
        std::cout <<'\n';
    }
    void delHead()
    {
        Node* dummy = head;
        head->pNext->pPrv = nullptr;
        head = head ->pNext;
        delete dummy;
    }
    void delTail()
    {
        Node* dummy = tail;
        tail->pPrv->pNext = nullptr;
        tail = tail->pPrv;
        delete dummy;
    }
    void delPos(int pos)
    {
        Node* dummy = head;
        while(pos--)
        {
            dummy = dummy->pNext;
        }
        dummy->pPrv->pNext = dummy->pNext;
        dummy->pNext->pPrv = dummy->pPrv;
        dummy->pNext = nullptr;
        dummy->pPrv = nullptr;
        delete dummy;
    }
    void sort()
    {
        Node* dummy = head;
        int arr[MAXN];
        int count(0);
        while(dummy)
        {
            arr[count++] = dummy->m_value;
            dummy = dummy->pNext;
        }
        quicksort(arr, count, 0, count-1);
        dummy = head;
        for (size_t i = 0; i < count; i++)
        {
            dummy->m_value = arr[i];
            dummy = dummy->pNext;
        }
    }
    ~LinkedList(){}
};

int main()
{
    LinkedList ll;
    ll.addHead(1);
    ll.addHead(2);
    ll.addHead(5);
    ll.addTail(3);
    ll.addPos(4,2);
    ll.find(3);
    std::cout<< "Before sort: ";
    ll.printLL();
    std::cout <<'\n';
    std::cout<< "After sort:";
    ll.sort();
    ll.printLL();
    ll.delHead();
    ll.printLL();

    ll.delTail();
    ll.printLL();

    ll.delPos(1);
    ll.printLL();

}