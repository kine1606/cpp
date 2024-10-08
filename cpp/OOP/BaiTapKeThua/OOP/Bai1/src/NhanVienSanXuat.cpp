#include "../inc/NhanVienSanXuat.h"
#include <iostream>
NhanVienSanXuat::NhanVienSanXuat()= default;
NhanVienSanXuat::NhanVienSanXuat(std::string ten, std::string ngaySinh):NhanVien(ten, ngaySinh){};
void NhanVienSanXuat::input()
{
    NhanVien::input();
    std::cout<< "\t Luong co ban: ";
    std::cin>> m_luongCoBan ;
    std::cout<< "\t So san pham da hoan thien: ";
    std::cin>> m_soSanPham ;
    std::cin.ignore();
    m_luong = m_luongCoBan + m_soSanPham*5000;
}
long long NhanVienSanXuat::getLuong()
{
    return m_luong;
}
// void NhanVienSanXuat::output()
// {
//     NhanVien::output();
// }
NhanVienSanXuat::~NhanVienSanXuat(){}