#include "BinarySearchTree.h"
#include <stack>
#include <queue>
#include <iostream>

TreeNode::TreeNode()
{
    m_value = 0;
    pLeft = pRight = nullptr;
}
TreeNode::TreeNode(int value)
{
    m_value = value;
    pLeft = pRight = nullptr;
}
BinarySearchTree::BinarySearchTree()
{
    Root = nullptr;
}
bool BinarySearchTree::isNothing()
{
    if(Root == nullptr) return true;
    return false;
}
void BinarySearchTree::addTreeNode_ByUsingWhileLoop(TreeNode* new_TreeNode)
{
    TreeNode* dummy = Root;
    if(isNothing())
    {
        Root = new_TreeNode;
        return;
    }
    else
    {
        while (true)
        {           

            // larger move right and if pRight of current node is null
            // assign pRight = new_TreeNode
            if(new_TreeNode->m_value > dummy->m_value)
            {
                if(dummy->pRight == nullptr)
                {
                    dummy->pRight = new_TreeNode;
                    return;
                }
                else
                {
                    dummy = dummy->pRight;
                }
            }
            // smaller, move left and if pLeft of current node is null
            // assign pLeft = new_TreeNode
            else
            {
                if(dummy->pLeft == nullptr)
                {
                    dummy->pLeft = new_TreeNode;
                    return;
                }
                else
                {
                    dummy = dummy->pLeft;
                }
            }
        }
    }
}
void BinarySearchTree::addTreeNode1(TreeNode* new_node)
{
    addTreeNode_ByUsingRecursive(Root, new_node);
}
void BinarySearchTree::addTreeNode_ByUsingRecursive(TreeNode*& currentNode,TreeNode*& new_node)
{
    if(currentNode == nullptr)
    {
        currentNode = new_node;
        return;
    }
    if(new_node->m_value > currentNode->m_value)
    {
        addTreeNode_ByUsingRecursive(currentNode->pRight, new_node);
    }
    else
    {
        addTreeNode_ByUsingRecursive(currentNode->pLeft, new_node);
    }
}
void BinarySearchTree::PreOrder(TreeNode* currentNode) // NLR
{
    if(currentNode != nullptr)
    {
        std::cout<< currentNode->m_value << " ";
        PreOrder(currentNode->pLeft);   
        PreOrder(currentNode->pRight);
    }
}
void BinarySearchTree::PreOrder_Iterative()
{
    if(Root == nullptr) return;
    else
    {
        std::stack <TreeNode*> stack_TreeNode;
        stack_TreeNode.push(Root);
        while (!stack_TreeNode.empty())
        {
            TreeNode* currentNode = stack_TreeNode.top();
            stack_TreeNode.pop();
            std::cout << currentNode->m_value << " ";
            if(currentNode->pRight!= nullptr)
            {
                stack_TreeNode.push(currentNode->pRight);
            }
            if(currentNode->pLeft!=nullptr)
            {
                stack_TreeNode.push(currentNode->pLeft);
            }

        }
    }
}
void BinarySearchTree::InOrder(TreeNode* currentNode)
{
    if(currentNode!= nullptr)
    {
        InOrder(currentNode->pLeft);
        std::cout<< currentNode->m_value << " ";
        InOrder(currentNode->pRight);
    }
}
void BinarySearchTree::InOrder_Iterative()
{
    if(Root == nullptr) return;
    else
    {
        std::stack <TreeNode*> stack_TreeNode;
        stack_TreeNode.push(Root);
        while (!stack_TreeNode.empty())
        {
            TreeNode* currentNode = stack_TreeNode.top();
            stack_TreeNode.pop();

            if(currentNode->pLeft != nullptr)
            {
                stack_TreeNode.push(currentNode->pLeft);
            } 
            std::cout << currentNode->m_value << " ";
            if(currentNode->pRight!= nullptr)
            {
                stack_TreeNode.push(currentNode->pRight);
            }
        }
        
    }
}
void BinarySearchTree::PostOrder(TreeNode* currentNode)
{
    if(currentNode!= nullptr)
    {
        PostOrder(currentNode->pLeft);
        PostOrder(currentNode->pRight); 
        std::cout<< currentNode->m_value << " ";
    }
}
void BinarySearchTree::PostOrder_Iterative()
{
    std::stack<TreeNode*> stack_TreeNode;
    std::stack<TreeNode*> stack_output;
    stack_TreeNode.push(Root);
    while (!stack_TreeNode.empty())
    {
        TreeNode* currentNode = stack_TreeNode.top();
        stack_output.push(currentNode);
        stack_TreeNode.pop();
        if(currentNode->pLeft != nullptr) stack_TreeNode.push(currentNode->pLeft);
        if(currentNode->pRight != nullptr) stack_TreeNode.push(currentNode->pRight);
    }
    while(!stack_output.empty())
    {
        std::cout << stack_output.top()->m_value << " ";
        stack_output.pop();
    }
}
void BinarySearchTree::BFS()
{
    std::queue <TreeNode*> queue_TreenNode;
    queue_TreenNode.push(Root);
    while (!queue_TreenNode.empty())
    {
        TreeNode* currentNode = queue_TreenNode.front();
        queue_TreenNode.pop();
        std::cout << currentNode->m_value << " ";
        if(currentNode->pLeft != nullptr) queue_TreenNode.push(currentNode->pLeft);
        if(currentNode->pRight != nullptr) queue_TreenNode.push(currentNode->pRight);
    }
}
TreeNode* BinarySearchTree::deleteNodeIterative(TreeNode* Root, int x) 
{
    if(Root == nullptr) return Root;
    TreeNode* parent = Root;
    TreeNode* dummy = Root;
    while ((dummy!= nullptr))
    {
        if(x > dummy->m_value)
        {
            parent = dummy;
            dummy = dummy->pRight;
        }
        else if(x < dummy->m_value)
        {
            parent = dummy;
            dummy = dummy->pLeft;
        }
        else break;
    }
    if(dummy == nullptr) return Root;
    if(dummy->pLeft == nullptr && dummy->pRight == nullptr)     // no child 
    {
        if(parent->pLeft == dummy)
            parent->pLeft = nullptr;
        else
            parent-> pRight = nullptr;
        delete dummy;
        dummy = nullptr;
        return Root;
    }

    if(dummy->pLeft == nullptr)     // 1 child , left or right
    {
        if(parent->pLeft == dummy)
            parent->pLeft = dummy->pRight;
        else
            parent->pRight = dummy->pRight;
        delete dummy;
        dummy = nullptr;
        return Root;
    }
    else if(dummy->pRight == nullptr)
    {
        if(parent->pLeft == dummy)
            parent->pLeft = dummy->pLeft;
        else
            parent->pRight = dummy->pLeft;
        delete dummy;
        dummy = nullptr;
        return Root;
    }
    else        // 2 child 
    {
        TreeNode* parentTemp = dummy;
        TreeNode* temp = dummy->pRight;
        while (temp!= nullptr)
        {
            parentTemp = temp;
            temp = temp->pLeft;
        }
        dummy->m_value = temp->m_value;
        parentTemp->pLeft = nullptr;
        delete temp;
        temp = nullptr;
        return Root;
    }
    return Root;
}
// void BinarySearchTree::replace(TreeNode*& dummy, TreeNode*& temp)
// {
//     if(temp->pLeft != nullptr) replace(dummy, temp->pLeft);
//     else
//     {

//         dummy->m_value = temp->m_value;
//         dummy = temp;
//         temp = temp->pRight;
//     }
//     return;
// }
// void BinarySearchTree::deleteNodeRecursive(TreeNode*& current, int x)
// {
//     if(current == nullptr) 
//     {
//         std::cout<< "Khong tim thay" <<'\n';
//         return;
//     }
//     if(current->m_value > x) deleteNodeRecursive(current->pLeft, x);    
//     else if(current->m_value < x) deleteNodeRecursive(current->pRight, x);
//     else    // Node-> m_value == x 
//     {
//         TreeNode* dummy = current;
//         if(current->pLeft == nullptr) current = current->pRight;  
//         else if(current->pRight == nullptr) current = current->pLeft;
//         else
//         {
//             replace(dummy, current->pRight);

//         }
//         delete dummy;   
//     }
// }
void BinarySearchTree::replace(TreeNode*& dummy, TreeNode*& temp)
{
    if(temp->pLeft!=nullptr) replace(dummy, temp->pLeft);
    else 
    {
        dummy->m_value = temp->m_value;
        dummy = temp;
        temp = temp->pRight;
    }
}
void BinarySearchTree::deleteNodeRecursive(TreeNode*& current, int x)
{
    if(current == nullptr) return;
    if(current->m_value < x) deleteNodeRecursive(current->pRight, x);
    else if(current->m_value > x) deleteNodeRecursive (current->pLeft, x);
    else 
    {
        TreeNode* dummy = current;
        if(current->pLeft == nullptr) current = current->pRight;
        else if(current->pRight == nullptr) current == current->pLeft;
        else
        {
            replace(dummy, current->pRight);
        }
        delete dummy;
        dummy = nullptr;
    }
}
void BinarySearchTree::Find_Value(int x)
{
    TreeNode* dummy = Root;
    while (dummy!= nullptr)
    {
        if(dummy->m_value < x)
            dummy = dummy->pRight;
        else if (dummy->m_value > x)
            dummy = dummy->pLeft;
        else 
        {
            std::cout<< "Found value!" <<'\n';
            return;
        }
    }
    std::cout<< "Not Found Value!" <<'\n';
}