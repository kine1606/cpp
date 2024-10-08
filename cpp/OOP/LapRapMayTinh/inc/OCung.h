#pragma once
#include <string>
#include "MayTinh.h"
class OCung
{
protected:
    std::string m_maOCung;
    long long m_donGia;
    int m_dungLuongOCung;
    std::string m_loai;
public:
    OCung();
    OCung(std::string);
    virtual void input(MayTinh&);
    virtual void output();
    ~OCung();
};