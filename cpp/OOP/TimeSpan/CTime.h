#pragma once
#include<iostream>
using namespace std;
class CT
{
private:
    int m_hour;
    int m_minute;
    int m_second;
public:
    CT();
    CT(int, int, int);
    ~CT();
    CT operator+(const int&);
    CT operator-(const int&);

    CT operator++();
    CT operator++(int);
    CT operator--();
    CT operator--(int);
    friend std::istream& operator>> (std::istream& in, CT&);
    friend std::ostream& operator<< (std::ostream& out, const CT&);
};