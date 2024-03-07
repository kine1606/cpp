#pragma once
#include <string>
class SinhVien
{
public:
    SinhVien();
    SinhVien(int MSSV, std::string name, double math, double literature);
    void input();
    void output();
    void rank();
    ~SinhVien();
private:
    int m_MSSV;
    std::string m_name;
    double m_math;
    double m_literature;
    double m_average;
};