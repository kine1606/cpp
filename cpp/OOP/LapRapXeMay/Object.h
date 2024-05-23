#pragma once
#include <string>
class Object
{
protected:
    std::string m_maSo;
    std::string m_hangSanXuat;
    std::string m_loai;
    long long m_donGia;
public:

    Object();
    // Object(std::string, std::string, std::string);
    virtual long long donGia(std::string) = 0;
    virtual ~Object();
};