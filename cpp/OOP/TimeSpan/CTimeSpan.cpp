#include "CTimeSpan.h"
CTimeSpan::CTimeSpan() = default;
CTimeSpan::CTimeSpan(int h, int m, int s):m_hour(h),m_minute(m),m_second(s){}
CTimeSpan::~CTimeSpan(){}
CTimeSpan CTimeSpan::operator+(const CTimeSpan& x)
{
    CTimeSpan temp;
    int a = m_second + x.m_second;
    int b = m_minute + x.m_minute;
    int c = m_hour + x.m_hour;
    b+= a/60;
    a%=60;
    c += b/60;
    b%=60;
    temp.m_hour = c;
    temp.m_minute = b;
    temp.m_second = a;
    return temp;
}
CTimeSpan CTimeSpan::operator-(const CTimeSpan& x)
{
    int totalSecond1 = m_hour*3600 + m_minute* 60 + m_second;
    int totalSecond2 = x.m_hour*3600 + x.m_minute* 60 + x.m_second;
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
    return CTimeSpan(hourDiff, minuteDiff, diffSecond);
}
bool CTimeSpan::operator==(const CTimeSpan& x)
{
    return (m_hour == x.m_hour) && (m_minute == x.m_minute) && (m_second == x.m_second);
}
bool CTimeSpan::operator!=(const CTimeSpan& x)
{
    return (m_hour != x.m_hour) || (m_minute != x.m_minute) || (m_second != x.m_second);
}
bool CTimeSpan::operator>(const CTimeSpan& x)
{
    if(m_hour > x.m_hour) return true;
    else if(m_hour < x.m_hour) return false;
    else
    {
        if(m_minute > x.m_minute) return true;
        else if(m_minute < x.m_minute) return false;
        else
        {
            if(m_second > x.m_second) return true;
            else if(m_second < x.m_second) return false;
        }
    }
    return false;
}
bool CTimeSpan::operator>=(const CTimeSpan& x)
{
    if(m_hour > x.m_hour) return true;
    else if(m_hour < x.m_hour) return false;
    else
    {
        if(m_minute > x.m_minute) return true;
        else if(m_minute < x.m_minute) return false;
        else
        {
            if(m_second >= x.m_second) return true;
            else if(m_second < x.m_second) return false;
        }
    }
    return true;
}
bool CTimeSpan::operator<(const CTimeSpan& x)
{
    if(m_hour < x.m_hour) return true;
    else if(m_hour > x.m_hour) return false;
    else
    {
        if(m_minute < x.m_minute) return true;
        else if(m_minute > x.m_minute) return false;
        else
        {
            if(m_second < x.m_second) return true;
            else if(m_second > x.m_second) return false;
        }
    }
    return false;
}
bool CTimeSpan::operator<=(const CTimeSpan& x)
{
    if(m_hour < x.m_hour) return true;
    else if(m_hour > x.m_hour) return false;
    else
    {
        if(m_minute < x.m_minute) return true;
        else if(m_minute > x.m_minute) return false;
        else
        {
            if(m_second <= x.m_second) return true;
            else if(m_second > x.m_second) return false;
        }
    }
    return true;
}
std::istream& operator>>(std::istream& in, CTimeSpan& x)
{
    std::cout<< "Nhap gio:";
    in >> x.m_hour;
    std::cout<< "Nhap phut:";
    in >> x.m_minute;
    std::cout<< "Nhap giay:";
    in >> x.m_second;
    return in;
}
std::ostream& operator<<(std::ostream& out, const CTimeSpan& x)
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