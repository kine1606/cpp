#pragma once
#include <string>
#include <iostream>
#include "CauThu.h"
class DoiBong
{
protected:
    std::string m_ten;
    std::string m_namThanhLap;
    CauThu* m_danhSachCauThu[11];
    std::string m_tenHuanLuyenVien;
    int m_diemSo = 0;
    int m_hieuSo = 0;
public:
    DoiBong()
    {
        for (size_t i = 0; i <=10; i++)
        {
            m_danhSachCauThu[i] = new CauThu();
        }
    }
    virtual void input()
    {
        getline(std::cin, m_ten);
        getline(std::cin, m_namThanhLap);
        for (size_t i = 0; i < 11; i++)
        {
            m_danhSachCauThu[i]->input();
        }
        getline(std::cin, m_tenHuanLuyenVien);
    }
    virtual void output()
    {
        std::cout<< '\t'<<  m_ten << "\t" << m_namThanhLap << '\t' << m_tenHuanLuyenVien << '\n' ;
    }
    virtual ~DoiBong()
    {
        for (size_t i = 0; i < 11; i++)
        {
            delete m_danhSachCauThu[i];
        }
    }
};

