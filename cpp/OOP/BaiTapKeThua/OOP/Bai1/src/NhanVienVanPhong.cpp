#include "../inc/NhanVienVanPhong.h"
#include <iostream>
NhanVienVanPhong::NhanVienVanPhong() = default;
NhanVienVanPhong::NhanVienVanPhong(std::string ten, std::string ngaySinh):NhanVien(ten, ngaySinh){}
void NhanVienVanPhong::input()
{
    NhanVien::input();
    std::cout<< "\t So ngay lam viec: ";
    std::cin>> m_soNgayLamViec ;
    std::cin.ignore();
    m_luong = m_soNgayLamViec* 100000;
}
long long NhanVienVanPhong::getLuong()
{
    return m_luong;
}
NhanVienVanPhong::~NhanVienVanPhong(){}