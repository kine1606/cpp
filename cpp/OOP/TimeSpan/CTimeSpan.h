#pragma once
#include<iostream>
using namespace std;
class CTimeSpan
{
private:
    int m_hour;
    int m_minute;
    int m_second;
    // int m_epoch;
public:
    CTimeSpan();
    CTimeSpan(int, int, int);
    ~CTimeSpan();
    CTimeSpan operator+(const CTimeSpan&);
    CTimeSpan operator-(const CTimeSpan&);
    
    bool operator>(const CTimeSpan&);
    bool operator>=(const CTimeSpan&);
    
    bool operator<=(const CTimeSpan&);
    bool operator<(const CTimeSpan&);

    bool operator!=(const CTimeSpan&);
    bool operator==(const CTimeSpan&);
    friend std::istream& operator>>(std::istream& in, CTimeSpan& x);
    friend std::ostream& operator<<(std::ostream& out, const CTimeSpan& x);
    // void input();
    // void output();
};