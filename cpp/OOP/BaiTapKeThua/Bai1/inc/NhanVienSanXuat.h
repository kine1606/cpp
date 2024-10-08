#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
private:
    int m_luongCoBan;
    int m_soSanPham;
public:
    NhanVienSanXuat();
    NhanVienSanXuat(std::string, std::string);
    long long getLuong() override;
    void input() override;
    // void output() override;
    ~NhanVienSanXuat();
};
