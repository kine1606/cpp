#pragma once
#include <iostream>
class CDate
{
private:
    int m_day, m_month, m_year;
public:
    CDate();
    CDate(int, int, int);
    friend std::istream& operator>> (std::istream& in, CDate& x);
    friend std::ostream& operator<< (std::ostream& out, const CDate& x);
    CDate& operator+(int);
    CDate& operator-(int);
    ~CDate();
};
