#include "CDate.h"
#include <iostream>
CDate::CDate() = default;
CDate::CDate(int d, int m, int y):m_day(d),m_month(m),m_year(y){}
CDate::~CDate(){}
CDate& CDate::operator-(int n)
{
    switch (m_month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(m_day - n < 0)
        {
            m_month -= abs(m_day - n)/31;
            m_day = (31 - m_day + n);
        } 
        else
        {
            m_day -= n;
        }
        break;
    case 4:
    case 6:
    case 11:
        if(m_day - n <0)
        {
            m_month -= abs(m_day - n) /30;
            m_day = 30- m_day + n ;
        }
        else
        {
            m_day -= n;
        }
        break;
    default:
        if(m_day - n < 0)
        {
            m_month -= abs(m_day - n) / 28;
            m_day = 28 - m_day + n;
        }
        else
        {
            m_day -= n;
        }
        break;
    }
    if(m_month < 0) 
    {
        m_year -= m_month/12;
        m_month = abs(m_month%12);
    }
    return *this;
}


CDate& CDate::operator+(int n)
{
    switch (m_month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(m_day + n > 31)
        {
            m_month += (m_day+n)/31;
            m_day = (m_day + n) % 31;
        }
        else
        {
            m_day += n;
        }
        break;
    case 4:
    case 6:
    case 11:
        if(m_day + n > 30)
        {
            m_month += (m_day+n) /30;
            m_day = (m_day+n) % 30;
        }
        else
        {
            m_day += n;
        }
        break;
    default:
        if(m_year % 4 !=0 && m_day + n > 28)
        {
            m_month += (m_day+n) /28;
            m_day = (m_day+n) % 28;
        }
        else if(m_year% 4 == 0 && m_day + n > 29)
        {
            m_month += (m_day+n) /29;
            m_day = (m_day+n) % 29;
        }
        else
        {
            m_day += n;
        }
        break;
    }
    if(m_month > 12) 
    {
        m_year += m_month/12;
        m_month%=12;
    }
    return *this;

}
std::istream& operator >> (std::istream& in, CDate& x)
{
    in >> x.m_day >> x.m_month >> x.m_year;
    return in;
}
std::ostream& operator << (std::ostream& out, const CDate& x)
{
    out << x.m_day << "/" << x.m_month << "/" << x.m_year << "\n";
    return out;
}