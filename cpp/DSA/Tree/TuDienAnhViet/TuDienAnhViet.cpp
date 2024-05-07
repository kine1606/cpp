#include "TuDienAnhViet.h"
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
TreeNode::TreeNode()  = default;
TreeNode::TreeNode(char* EWord, char* VWord)
{
    strcpy(m_Eword, EWord);
    strcpy(m_Vmeaning, VWord);
    pLeft = pRight = nullptr;
}
TuDienAnhViet::TuDienAnhViet():Root(nullptr){};
bool TuDienAnhViet::isEmpty()
{
    if(Root == nullptr) return true;
    return false;
}
void TuDienAnhViet::addNode(TreeNode* new_node)
{
    if(isEmpty())
    {
        Root = new_node;
        return;
    }
    else
    {
        TreeNode* dummy = Root;
        while(true)
        {
            int check = strcmp(new_node->m_Eword, dummy->m_Eword);
            if(check > 0)
            {
                if(dummy->pRight== nullptr)
                {
                    dummy->pRight = new_node;
                    return;
                }
                else
                {
                    dummy = dummy->pRight;
                }
            }
            else
            {
                if(dummy->pLeft== nullptr)
                {
                    dummy->pLeft = new_node;
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
void TuDienAnhViet::print(TreeNode* current)
{
    if(current!=nullptr)
    {
        print(current->pLeft);
        std::cout<< current->m_Eword << ":" << current->m_Vmeaning <<'\n';
        print(current->pRight);
    }
}
void TuDienAnhViet::bfs()
{
    std::queue <TreeNode*> hihi;
    hihi.push(Root);
    while(!hihi.empty())
    {
        TreeNode* current = hihi.front();
        hihi.pop();
        std::cout<<"-" << current->m_Eword <<" : " << current->m_Vmeaning <<'\n';
        if(current->pLeft!= nullptr) hihi.push(current->pLeft);
        if(current->pRight!= nullptr) hihi.push(current->pRight);
    }
}

void TuDienAnhViet::find()
{
    std::cout<< "Tra cuu nghia tieng Viet!" <<'\n';
    while(true)
    {
        std::cout<< "Nhap tu can tim (nhap 0 de thoat): ";
        char temp[10];
        std::cin.getline(temp, 10);
        if(strcmp(temp, "0") == 0)
        {
            std::cout<< "Da thoat!" <<'\n';
            return;   
        }
        TreeNode* dummy = Root;
        bool isThere(false);
        std::cout<< "=================================" <<'\n';
        while(dummy!=nullptr)   
        {
    
            int check = strcmp(temp, dummy->m_Eword);
            // std::cout<< "Check = " << check <<'\n';
            if(check == 0)
            {
                std::cout<< "Nghia cua '" << dummy->m_Eword  << "' la " << dummy->m_Vmeaning <<'\n';
                isThere = true; 
                break;
            }
            else if(check > 0)
            {
                dummy = dummy->pRight;
            }
            else
            {
                dummy= dummy->pLeft;
            }
        }
        if(!isThere) std::cout<< "Khong tim thay!" <<'\n';
    }
}