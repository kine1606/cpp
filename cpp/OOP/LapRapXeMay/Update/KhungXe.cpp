#include "KhungXe.h"
#include <iostream>
#include <string>
KhungXe::KhungXe() =default;
KhungXe::KhungXe(std::string maso, std::string loai , std::string hangSX)
{
    m_maSo = maso;
    m_loai = loai;
    m_hangSanXuat = hangSX;
}
void KhungXe::input()
{
    std::cout<< "NHAP THONG TIN KHUNG XE: " <<'\n';
    std::cout<< "Nhap ma so khung xe: ";
    getline(std::cin, m_maSo);
    std::cout<< "Nhap hang san xuat khung xe: ";
    getline(std::cin, m_hangSanXuat);
    // std::cout<< "Nhap loai khung xe: ";
    // getline(std::cin, m_loai);
}
void KhungXe::output()
{
    std::cout<< "\nXUAT THONG TIN KHUNG XE: " <<'\n';
    std::cout<< "Ma so khung xe: " << m_maSo <<'\n';
    std::cout<< "Hang san xuat: " << m_hangSanXuat <<'\n';
    std::cout<< "Loai khung xe: "  << m_loai <<'\n';
    std::cout<< "Don gia: " << m_donGia <<'\n';
}
KhungXe::~KhungXe(){}