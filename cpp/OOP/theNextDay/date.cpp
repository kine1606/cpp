#include "date.h"
#include <iostream>
date::date()
{
    m_day = 1;
    m_month = 1;
    m_year = 1;
}
date::date(unsigned d, unsigned m, unsigned y)
{
    m_day = d;
    m_month = m;
    m_year = y ; 
}
void date::input()
{
    std::cout << "Enter date:";
    std::cin>> m_day >> m_month >> m_year ;
}
void date::calc()
{
    if(m_month==12 && m_day==31)
    {
        std::cout<< "The next day is: " << 1 << "/" << 1 << "/" << ++m_year <<'\n';
        return ;
    }
    else 
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
                if(m_day<31)
                {
                    std::cout<< "The next day is: " << ++m_day << "/" << m_month << "/" << m_year <<'\n';
                    return ;
                }
                else 
                {
                    std::cout<< "The next day is: " << 1 << "/" << ++m_month << "/" << m_year <<'\n';
                    return ;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                if(m_day<30)
                {
                    std::cout<< "The next day is: " << ++m_day << "/" << m_month << "/" << m_year <<'\n';
                    return ;
                }
                else 
                {
                    std::cout<< "The next day is: " << 1 << "/" << ++m_month << "/" << m_year <<'\n';
                    return ;
                }
            default:
                if(m_year%4 ==0 && m_year%100 != 0  && m_day==28)
                    std::cout<< "The next day is: " << ++m_day << "/" << m_month << "/" << m_year <<'\n';
                else if(m_year%4==0 && m_year%100 !=0 && m_day==29)
                    std::cout<< "The next day is: " << 1 << "/" << ++m_month << "/" << m_year <<'\n';
                else
                    std::cout<< "The next day is: " << 1 << "/" << ++m_month << "/" << m_year <<'\n';
        }
    }
}
date::~date(){}