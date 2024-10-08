#pragma once
#include <iostream>
#include <vector>
#include <string>
class Node
{
public:
    std::string m_word;
    std::string m_mean;
    Node* pNext;
public:
    Node(std::string, std::string);
};

class LinkedList
{
public:
    Node* head = nullptr;
    Node* tail = nullptr;
};
class HashTable
{
public:
    std::vector <LinkedList*> myHT;
public:
    HashTable();
    HashTable(int);
    int HashFunction(std::string);
    void insertWord(std::string, std::string);
    void deleteWord(std::string);
    void print();
    std::string find(std::string);
    ~HashTable();
};