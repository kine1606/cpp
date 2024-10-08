#include "../inc/KhachHang.h"
#include <iostream>

KhachHang::KhachHang() = default;

void KhachHang::input()
{
    std::cin.ignore();
    std::cout<< "   Nhap ten khach hang: " ;
    getline(std::cin, m_name);
    std::cout<< "   Nhap ngay thang nam sinh: " ;
    getline(std::cin, m_ngaySinh);
    std::cout<< "   Nhap so dien thoai: " ;
    getline(std::cin, m_sdt);
}
void KhachHang::output()
{
    std::cout<< "   Ten khach hang: " << m_name <<'\n';  
    std::cout<< "   Ngay sinh: " << m_ngaySinh <<'\n';
    std::cout<< "   So dien thoai: " << m_sdt <<'\n';
}