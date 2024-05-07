#pragma once
class TreeNode
{
public:
    char m_Eword[10];
    char m_Vmeaning[20];
    TreeNode* pLeft;
    TreeNode* pRight;
public:
    TreeNode();
    TreeNode(char*, char*);
};
class TuDienAnhViet
{
public:
    TreeNode* Root;
public:
    TuDienAnhViet();
    bool isEmpty();
    void addNode(TreeNode*);
    void find();
    void bfs();
    void print(TreeNode*);
};
