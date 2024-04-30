#pragma once
#include <string>
class NhanVien
{
protected:
    std::string m_series;
    std::string m_name;
    unsigned int m_age;
    std::string m_phoneNumber;     
    std::string m_email;
    long long m_basicSalery;
public:
    NhanVien();
    NhanVien(std::string, std::string, unsigned, std::string, std::string, long long);
    std::string getName();
    virtual void input();
    virtual void output();
    virtual long long realSalery() = 0;
    ~NhanVien();
};

