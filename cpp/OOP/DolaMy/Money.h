#pragma once
#include <iostream>
class Money
{
private:
    int m_dollar;
    int m_cent;
public:
    Money();
    friend std::istream& operator>> (std::istream& , Money&);
    Money& operator++();
    Money& operator++(int);
    ~Money();
};