#pragma once
#include "MayTinh.h"
#include <string>
class CPU
{
protected:
    std::string m_maCPU;
    long long m_donGia;
    std::string m_loai;
public:
    CPU();
    CPU(std::string);
    void input(MayTinh&);
    void output();
    ~CPU();
};