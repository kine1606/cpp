#include "IntSet.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
IntSet::IntSet()
{
    m_values = nullptr;
    m_count = 0;
}
IntSet::IntSet(int* values, int count)
{
    std::map <int, int> myMap;
    m_count = count;
    m_values = new int[m_count];
    int index(0);
    for (size_t i = 0; i < m_count; i++)
    {
        if(myMap[values[i]] == 0)
        {
            m_values[index++] = values[i];
            myMap[values[i]]++;
        }
        else
        {
            m_values[index++] = 0;
        }
    }    
}
IntSet::~IntSet(){}
std::istream& operator>> (std::istream& in, IntSet& x)
{
    std::cout<< "Nhap so luong phan tu: ";
    in >> x.m_count;
    std::map <int, int> myMap;
    x.m_values = new int [x.m_count];
    int index(0);
    std::cout<< "Nhap phan tu: " ;
    for (size_t i = 0; i < x.m_count; i++)
    {
        int temp;
        in >> temp;
        if(myMap[temp] == 0)
        {
            x.m_values[index++] = temp;
            myMap[temp]++;
        }
        else
        {
            x.m_values[index++] = -99999;

        }
    }
    return in;
}
std::ostream& operator<< (std::ostream& out, const IntSet& x)
{
    if(x.m_count == 0) 
    {
        out << "Tap hop rong!";
        return out;
    }
    for (size_t i = 0; i < x.m_count; i++)
    {
        if(x.m_values[i] == -99999) continue;
        out << x.m_values[i] << " ";
    }
    out <<'\n';
    return out;
}
IntSet IntSet::operator+(const IntSet& rhsIS)
{
    std::map<int,int> myMap;
    for (size_t i = 0; i < this->m_count; i++)
    {
        myMap[this->m_values[i]] = 1;
    }
    for (size_t i = 0; i < rhsIS.m_count; i++)
    {
        myMap[rhsIS.m_values[i]] = 1;
    }
    int *copy = new int[myMap.size()];
    int index(0);
    for (auto i = myMap.begin(); i != myMap.end(); i++)
    {   
        copy[index++] = i->first;
    }
    return IntSet(copy, myMap.size());
}
IntSet IntSet::operator-(const IntSet& rhsIS)
{
    std::map<int, bool> myMap;
    for (size_t i = 0; i < this->m_count; i++)
    {
        myMap[this->m_values[i]] = true;
    }
    for (size_t i = 0; i < rhsIS.m_count; i++)
    {
        myMap[rhsIS.m_values[i]] = false;
    }
    std::vector<int> myVector;
    for (auto i = myMap.begin(); i != myMap.end(); i++)
    {
        if(i->second) myVector.push_back(i->first);
    }
    if(myVector.size()== 0) return IntSet(nullptr, 0);
    int* copy = new int [myVector.size()];
    for (size_t i = 0; i < myVector.size(); i++)
    {
        copy[i] = myVector[i];
    }
    return IntSet(copy, myVector.size());
}
bool IntSet::operator==(const IntSet& rhsIS)
{
    if(m_count != rhsIS.m_count) return false;
    else 
    {
        std::sort(m_values, m_values +m_count);
        std::sort(rhsIS.m_values, rhsIS.m_values + rhsIS.m_count);
        for (size_t i = 0; i < m_count; i++)
        {
            if(m_values[i] != rhsIS.m_values[i]) return false;
        }
    }
    return true;
}
int& IntSet::operator[](int index)
{
    return m_values[index];
}