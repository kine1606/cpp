#pragma once
#include <iostream>
class SinhVien
{
protected:
    std::string m_name;
    std::string m_series;
    std::string m_address;
    int m_credit; 
    double m_average;
public:
    SinhVien();
    SinhVien(std::string, std::string, std::string, int, double);
    ~SinhVien();
    void input();
    void output();
    virtual bool isGraduate() = 0;
};