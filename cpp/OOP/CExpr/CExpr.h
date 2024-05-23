#pragma once
class Node
{
public:
    char m_expr;
    Node* pLeft;
    Node* pRight;
public:
    Node(char);
};
class CExpr
{
public:
    Node* Root;
public:
    CExpr(char*);
    ~CExpr();
    double eval();
    CExpr();
    void AddOperand(char);
    void AddOperator(char);
    double Calculate();
};
