#pragma once
#include "ThietBiDanDung.h"
#include "KhachHang.h"
#include "ChiTiet.h"
#include <string>
#include <vector>
class HoaDon
{
private:
    std::string m_maHD;
    std::string m_ngayLap;
    long long m_donGia;
    KhachHang m_kh;
    std::vector <ChiTiet> m_danhSachChiTiet;
    // std::vector <ChiTiet*> m_danhSachChiTiet;
public:
    HoaDon();
    void input();
    void output();
    ~HoaDon();
    friend class DanhSachHoaDon;
};