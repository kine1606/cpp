#pragma once
#include <string>

class ThietBiDanDung
{
protected:
    std::string m_maSP;
    std::string m_tenSP;
    long long m_donGia;
    std::string m_hangSanXuat;
public:
    ThietBiDanDung();
    // ThietBiDanDung(std::string, std::string, std::string);
    virtual long long getDonGia();
    ~ThietBiDanDung();
    virtual void input();
    virtual void output();
};  
