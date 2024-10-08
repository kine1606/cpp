#include <iostream>
class CDate
{
private:
    int m_day = 1, m_month = 1 , m_year = 1;
public:
    friend std::istream& operator>> (std::istream& in, CDate& x)
    {   
        in >> x.m_day >> x.m_month >> x.m_year;
        return in;
    }   
    friend std::ostream& operator<< (std::ostream& out, const CDate& x)
    {
        out << x.m_day << "/" << x.m_month << "/" << x.m_year;
        return out;
    }
    CDate toiUu(CDate& x)
    {
        switch (x.m_month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            
            break;
        
        default:
            break;
        }
    }
    CDate operator+(const int& soNgay)
    {
        m_day += soNgay;
        return toiUu(*this);
    }
};
