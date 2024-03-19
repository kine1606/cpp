#pragma once
#include <string>
const int MAXN = 100;
class cHocSinh
{
public:
    cHocSinh();
    void input();
    void output();
    int compareBirth(const cHocSinh&);
    int compareMark(const cHocSinh&);
    ~cHocSinh();
private:
    int m_MSSV;
    std::string m_name;
    std::string m_sex;
    unsigned m_bday;
    unsigned m_bmonth;
    unsigned m_byear;
    double m_math;
    double m_literature;
    double m_engrisk;
    double m_average;
};