#pragma once
#include <string>

class BanhXe
{
protected:
    std::string m_maSo;
    std::string m_hangSanXuat;
    std::string m_loai;
    long long m_donGia;
public:
    BanhXe(std::string, std::string, std::string);
    BanhXe();
    virtual void input();
    virtual void output();
    ~BanhXe();
};
