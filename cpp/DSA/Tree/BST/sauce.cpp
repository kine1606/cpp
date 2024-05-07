#include "BinarySearchTree.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;
int main()
{
    auto start = high_resolution_clock::now();
    BinarySearchTree BST;
    TreeNode* new_node1 = new TreeNode(20);
    TreeNode* new_node2 = new TreeNode(10);
    TreeNode* new_node3 = new TreeNode(30);
    TreeNode* new_node4 = new TreeNode(5);
    TreeNode* new_node5 = new TreeNode(15);
    TreeNode* new_node6 = new TreeNode(25);
    TreeNode* new_node7 = new TreeNode(40);
    TreeNode* new_node8 = new TreeNode(23);
    TreeNode* new_node9 = new TreeNode(27);
    TreeNode* new_node10 = new TreeNode(26);
    TreeNode* new_node11 = new TreeNode(16);
    TreeNode* new_node12 = new TreeNode(28);

    BST.addTreeNode_ByUsingWhileLoop(new_node1);
    BST.addTreeNode_ByUsingWhileLoop(new_node2);
    BST.addTreeNode_ByUsingWhileLoop(new_node3);
    BST.addTreeNode_ByUsingWhileLoop(new_node4);
    BST.addTreeNode_ByUsingWhileLoop(new_node5);
    BST.addTreeNode_ByUsingWhileLoop(new_node6);
    BST.addTreeNode_ByUsingWhileLoop(new_node7);
    BST.addTreeNode_ByUsingWhileLoop(new_node8);
    BST.addTreeNode_ByUsingWhileLoop(new_node9);
    BST.addTreeNode_ByUsingWhileLoop(new_node10);
    BST.addTreeNode_ByUsingWhileLoop(new_node11);
    BST.addTreeNode_ByUsingWhileLoop(new_node12);
    // std::cout<< "Pre-order: ";
    // BST.PreOrder(BST.Root);
    // std::cout<< "\nPre-order: ";
    // BST.PreOrder_Iterative();
    // // std::cout << "\nInOrder:";
    // // BST.InOrder(BST.Root);
    // // std::cout <<"\nInOrder:";
    // std::cout <<"\nBFS:";
    // BST.BFS();
    // std::cout<< "\nPostOrder:";
    // BST.PostOrder(BST.Root);
    // std::cout<< "\nPostOrder:";
    // BST.PostOrder_Iterative();
    // BST.deleteNode(15);
    std::cout<< "Before delete:" <<'\n';
    BST.BFS();
    std::cout<< "After delete:" <<'\n';
    // BST.deleteNodeRecursive(BST.Root, 5);
    // BST.BFS();
    // std::cout <<'\n';
    // BST.deleteNodeRecursive(BST.Root, 15);
    // BST.BFS();
    BST.deleteNodeRecursive(BST.Root, 20);
    BST.BFS();
    std::cout <<'\n';
    // BST.Find_Value(20);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << '\n' << duration.count() << " microseconds";
}
