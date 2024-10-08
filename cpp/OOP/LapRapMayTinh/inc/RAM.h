#pragma once
#include <string>
#include "MayTinh.h"
class RAM
{
protected:
    std::string m_maRAM;
    int m_dungLuongRAM;
    long long m_donGia;
    std::string m_loai;
public:
    RAM();
    RAM(std::string, int);
    void input(MayTinh&);
    virtual void output();
    ~RAM();
    friend class MayTinh;
};
