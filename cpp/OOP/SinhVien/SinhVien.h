#pragma once
#include <string>
const int MAXN = 100;
class SinhVien
{
public:
    SinhVien();
    SinhVien(int MSSV, std::string name, std::string sex, double math, double physic, double chemistry);
    void input();
    void output();
    ~SinhVien();
private:
    int m_MSSV;
    std::string m_name;
    std::string m_sex;
    double m_math;
    double m_physic;
    double m_chemistry;
    double m_average ;
};