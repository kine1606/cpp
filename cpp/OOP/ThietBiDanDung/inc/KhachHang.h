#pragma once
#include <string>
class KhachHang
{
private:
    std::string m_maSoKH;
    std::string m_tenKH;
    std::string m_sdt;
    std::string m_diaChi;
public:
    KhachHang();
    KhachHang(std::string,std::string,std::string,std::string);
    void input();
    void output();
    ~KhachHang();
};