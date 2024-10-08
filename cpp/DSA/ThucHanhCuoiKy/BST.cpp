#include <iostream>
#include <queue>
class Node
{
public:
    int m_value;
    Node* pLeft;
    Node* pRight;
    Node(int x)
    {
        m_value = x;
        pLeft = pRight = nullptr;
    }
};
class BST
{
public:
    Node* root;
public:
    BST():root(nullptr){}
    void createTree(int x)
    {
        root = new Node(x);
    }
    void addValue(int x)
    {
        if(!root) createTree(x);
        else 
        {
            Node* dummy = root;
            while(true)
            {
                if(dummy->m_value < x)
                {
                    if(!dummy->pRight)
                    {
                        dummy->pRight = new Node(x);
                        return;
                    } 
                    else dummy = dummy->pRight;
                }
                else
                {
                    if(!dummy->pLeft)
                    {
                        dummy->pLeft = new Node(x);
                        return;
                    } 
                    else dummy = dummy->pLeft;
                }
            }
        }
    }
    int countLeaf(Node* cur)
    {
        if(!cur) return 0;
        int count(0);
        if(cur->pLeft == nullptr && cur->pRight == nullptr) count = 1;
        return countLeaf(cur->pLeft) + countLeaf(cur->pRight) + count;
    }

    // int countParent(Node* cur)
    // {
    //     if(!cur) return 0;
    //     if(cur->pLeft == nullptr && cur->pRight == nullptr) return 0;
    //     else return 1;
    //     return countParent(cur->pLeft) + countParent(cur->pRight);
    // }

    int count_OneChild(Node* cur)
    {
        if(!cur) return 0;
        int count(0);
        if((cur->pLeft == nullptr && cur->pRight != nullptr) || 
        (cur->pLeft != nullptr && cur->pRight == nullptr))
            count = 1;
        return count + count_OneChild(cur->pLeft) + count_OneChild(cur->pRight); 
    }

    int count_TwoChild(Node* cur)
    {
        if(cur == nullptr) return 0;
        int count(0);
        if(cur->pLeft != nullptr && cur->pRight != nullptr) count = 1;
        return count + count_TwoChild(cur->pLeft) + count_TwoChild(cur->pRight); 
    }


    int height(Node* cur)
    {
        if(!cur) return 0;
        int left = height(cur->pLeft);
        int right = height(cur->pRight);
        if(left > right) return left + 1;
        return right + 1;
    }
    void LNR(Node* cur)
    {
        if(!cur) return;
        LNR(cur->pLeft);
        std::cout << cur->m_value << " ";
        LNR(cur->pRight);
    }
    void BFS(Node* root)
    {
        std::queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* dummy = q.front(); q.pop();
            std::cout << dummy->m_value << " ";
            if(dummy->pLeft) q.push(dummy->pLeft);
            if(dummy->pRight) q.push(dummy->pRight);
        }
    }
    ~BST()
    {
        std::queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* dummy = q.front();
            q.pop();
            if(dummy->pLeft) q.push(dummy->pLeft);
            if(dummy->pRight) q.push(dummy->pRight);
            delete dummy;
        }
    }
};

int main()
{
    BST tree;
    int x;
    std::cin >> x;
    tree.createTree(x);
    while(true)
    {
        std::cin >> x;
        if(x)
            tree.addValue(x);  
        else break;
    }
    tree.LNR(tree.root);
    std::cout << '\n';
    tree.BFS(tree.root);
    std::cout << "\n So luong node co 1 con:" << tree.count_OneChild(tree.root);
    std::cout << "\n So luong node co 2 con:" << tree.count_TwoChild(tree.root);
    std::cout << "\n So luong node la:" << tree.countLeaf(tree.root);
    // std::cout << "\n So luong node cha:" << tree.countParent(tree.root);
}