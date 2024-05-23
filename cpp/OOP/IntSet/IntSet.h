#pragma once
#include <iostream>
// Xây dựng class IntSet (tập hợp số nguyên)
class IntSet
{
private:
    int * m_values;
    int m_count;
public:
    IntSet();
    IntSet(int*, int);
    ~IntSet();
    IntSet operator+(const IntSet&);
    IntSet operator-(const IntSet&);
    bool operator== (const IntSet&);
    int& operator[] (int);
    friend std::istream& operator>> (std::istream& in, IntSet&);
    friend std::ostream& operator<< (std::ostream& out, const IntSet&);

};
