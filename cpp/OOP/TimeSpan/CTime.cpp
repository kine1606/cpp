#include "CTime.h"
CT::CT() = default;
CT::CT(int hour, int minute, int second):m_hour(hour), m_minute(minute), m_second(second){}
CT::~CT(){}
CT CT::operator+(const int& x)
{
    int a = m_second + x;
    int b = m_minute;
    b+= a/60;
    a%=60;
    int c = m_hour;
    c += b/60;
    b%=60;
    return CT(c, b, a);
}
CT CT::operator-(const int& x)
{
    int totalSecond1 = m_hour*3600 + m_minute* 60 + m_second;
    int totalSecond2 = x;
    int diffSecond = totalSecond1 - totalSecond2;
    int hourDiff = diffSecond/3600;
    diffSecond%=3600;
    int minuteDiff = diffSecond/60;
    diffSecond%=60;
    if(diffSecond < 0)
    {
        minuteDiff-=1;
        diffSecond+=60;
        if(minuteDiff<0)
        {
            hourDiff-=1;
            minuteDiff+=60;
        }
        if(hourDiff<0)
        {
            hourDiff+=24;
        }
    }
    return CT(hourDiff, minuteDiff, diffSecond);
}
std::istream& operator>>(std::istream& in, CT& x)
{
    std::cout<< "Nhap gio:";
    in >> x.m_hour;
    std::cout<< "Nhap phut:";
    in >> x.m_minute;
    std::cout<< "Nhap giay:";
    in >> x.m_second;
    return in;
}
std::ostream& operator<<(std::ostream& out, const CT& x)
{
    if(x.m_hour <10)
        out << 0 << x.m_hour << ":";
    else out << x.m_hour<< ":";
    if(x.m_minute < 10)
        out << 0 << x.m_minute<< ":";
    else out << x.m_minute<< ":";
    if (x.m_second < 10)
        out << 0 << x.m_second;
    else out << x.m_second;
    return out;
}
CT CT::operator++()
{
    m_second ++;
    m_minute+= m_second/60;
    m_second%=60; 
    m_hour += m_minute/60;
    m_minute%=60;
    return *this;
}
CT CT::operator++(int)
{
    m_second++;
    m_minute+= m_second/60;
    m_second%=60; 
    m_hour += m_minute/60;
    m_minute%=60;
    return *this;
}
CT CT::operator--()
{
    int totalSecond1 = m_hour*3600 + m_minute* 60 + m_second;
    int totalSecond2 = 1;
    int diffSecond = totalSecond1 - totalSecond2;
    int hourDiff = diffSecond/3600;
    diffSecond%=3600;
    int minuteDiff = diffSecond/60;
    diffSecond%=60;
    if(diffSecond < 0)
    {
        minuteDiff-=1;
        diffSecond+=60;
        if(minuteDiff<0)
        {
            hourDiff-=1;
            minuteDiff+=60;
        }
        if(hourDiff<0)
        {
            hourDiff+=24;
        }
    }
    m_hour = hourDiff;
    m_minute = minuteDiff;
    m_second = diffSecond;
    return *this;
}

CT CT::operator--(int)
{
    int totalSecond1 = m_hour*3600 + m_minute* 60 + m_second;
    int totalSecond2 = 1;
    int diffSecond = totalSecond1 - totalSecond2;
    int hourDiff = diffSecond/3600;
    diffSecond%=3600;
    int minuteDiff = diffSecond/60;
    diffSecond%=60;
    if(diffSecond < 0)
    {
        minuteDiff-=1;
        diffSecond+=60;
        if(minuteDiff<0)
        {
            hourDiff-=1;
            minuteDiff+=60;
        }
        if(hourDiff<0)
        {
            hourDiff+=24;
        }
    }
    m_hour = hourDiff;
    m_minute = minuteDiff;
    m_second = diffSecond;
    return *this;
}