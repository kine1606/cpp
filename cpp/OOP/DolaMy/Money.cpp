#include "Money.h"
Money::Money() = default;
Money& Money::operator++()
{
    m_cent +=1;
    if(m_cent >=100)
    {
        m_dollar+=m_cent/100;
        m_cent%=100;
    }
    return *this;
}
Money& Money::operator++(int)
{
    m_cent +=1;
    if(m_cent >=100)
    {
        m_dollar+=m_cent/100;
        m_cent%=100;
    }
    return *this;
}