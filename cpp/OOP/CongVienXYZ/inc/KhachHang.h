#pragma once
#include <string>
class KhachHang
{
private:
    std::string m_name;
    std::string m_sdt;
    std::string m_ngaySinh;
public:
    KhachHang();
    void input();
    void output();
    friend class CongVien;
};