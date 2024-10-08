#pragma once
#include <string>
#include <fstream>
class NhanVien
{
protected:
    std::string m_ten;
    std::string m_ngaySinh;
    long long m_luong;
public:
    NhanVien();
    NhanVien(std::string, std::string);
    virtual long long getLuong();
    virtual void input();
    void output();
    ~NhanVien();
};