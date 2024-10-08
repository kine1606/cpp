#pragma once
#include <string>

class VatPham
{
protected:
    std::string m_ten;
    int m_ID;
public:
    VatPham();
    VatPham(std::string, int);
    virtual void input();
    // void output();
    virtual ~VatPham();
};
