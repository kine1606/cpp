#pragma once
#include "MayTinh.h"
#include <string>

class ManHinh
{
protected:
    std::string m_maManHinh;
    std::string m_loaiManHinh;
    int m_doPhanGiai;
    long long m_donGia;
public:
    ManHinh();
    ManHinh(std::string);
    virtual void input(MayTinh&);
    virtual void output();
    ~ManHinh();
};
