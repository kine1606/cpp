#include "../inc/NhanVien.h"
#include <iostream>
NhanVien::NhanVien() = default;
NhanVien::NhanVien(std::string ten, std::string ngaySinh):m_ten(ten),m_ngaySinh(ngaySinh){}
long long NhanVien::getLuong()
{
    return m_luong;
}
void NhanVien::input()
{
    std::cout<< "NHAP THONG TIN NHAN VIEN:" <<'\n';
    std::cout<< "\t Ten nhan vien: ";
    getline(std::cin, m_ten);
    std::cout << "\t Ngay sinh: ";
    getline(std::cin, m_ngaySinh);
}
void NhanVien::output()
{
    std::cout<< "\nTHONG TIN NHAN VIEN: " <<'\n';
    std::cout<< "\t Ten nhan vien: " << m_ten <<'\n';
    std::cout<< "\t Ngay sinh: " << m_ngaySinh <<'\n';
    std::cout<< "\t Luong: " << m_luong <<'\n';
}
NhanVien::~NhanVien(){}