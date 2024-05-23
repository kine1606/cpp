#include "CExpr.h"
#include <iostream>
#include <string>
CExpr::CExpr():Root(nullptr){}
Node::Node(char x)
{
    m_expr = x;
    pLeft = pRight = nullptr;
}
void CExpr::AddOperand(char operand)
{
    Node* new_node = new Node(operand);
    if(Root== nullptr)
    {
        Root = new_node;
        return;
    }
    Node* dummy = Root;
    while(true)
    {
        if(dummy->m_expr < operand)
        {
            if(dummy->pRight == nullptr)
            {
                dummy->pRight = new_node;
                return;
            }
        }
    }
}