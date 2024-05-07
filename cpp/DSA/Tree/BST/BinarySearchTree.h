#pragma once
class TreeNode
{
public:
    int m_value;
    TreeNode* pLeft;
    TreeNode* pRight;
public:
    TreeNode();
    TreeNode(int);
};
class BinarySearchTree
{
public:
    TreeNode* Root;
public:
    BinarySearchTree();
    bool isNothing();
    void addTreeNode_ByUsingWhileLoop(TreeNode*);
    void addTreeNode_ByUsingRecursive(TreeNode*&, TreeNode*&);
    void addTreeNode1(TreeNode*);
    void PreOrder(TreeNode*);
    void InOrder(TreeNode*);
    void PostOrder(TreeNode*);
    void PreOrder_Iterative();
    void InOrder_Iterative();
    void PostOrder_Iterative();
    void BFS();
    void Find_Value(int);
    TreeNode* deleteNodeIterative(TreeNode*, int);
    void deleteNodeRecursive(TreeNode*&, int);
    void replace(TreeNode*&, TreeNode*&);
    // void BFS_Iterative(TreeNode*);
    // void PostOrder_Iterative();
};
