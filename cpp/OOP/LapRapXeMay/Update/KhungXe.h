#pragma once
#include <string>

class KhungXe
{
protected:
    std::string m_maSo;
    std::string m_hangSanXuat;
    std::string m_loai;
    long long m_donGia;
public:
    KhungXe ();
    KhungXe(std::string,std::string,std::string);
    virtual void input();
    virtual void output();
    ~KhungXe();
};
