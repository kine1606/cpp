#include <iostream>
class LinkedList
{

public:
    // default constructor
    LinkedList() = default;
    LinkedList(int data)
    {
        m_prv = NULL;
        m_nxt = NULL;
        m_data = data;
    }
    // init constuctor
    void Head()
    {
        m_prv = NULL;
        m_nxt = 
    }
    void addNode(int pos, int data)
    {

    }
    // Destructor
    ~LinkedList();
private:
    int *m_prv;
    int *m_nxt;
    int m_data;
};
