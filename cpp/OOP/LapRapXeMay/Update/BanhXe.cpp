#include "BanhXe.h"
#include <iostream>
#include <string>
BanhXe::BanhXe() =default;
BanhXe::BanhXe(std::string maso, std::string loai , std::string hangSX)
{
    m_maSo = maso;
    m_loai = loai;
    m_hangSanXuat = hangSX;
}
void BanhXe::input()
{
    std::cout<< "NHAP THONG TIN BANH XE: " <<'\n';
    std::cout<< "Nhap ma so banh xe: ";
    getline(std::cin, m_maSo);
    std::cout<< "Nhap hang san xuat banh xe: ";
    getline(std::cin, m_hangSanXuat);
    // std::cout<< "Nhap loai banh xe: ";
    // getline(std::cin, m_loai);
}
void BanhXe::output()
{
    std::cout<< "\nXUAT THONG TIN BANH XE: " <<'\n';
    std::cout<< "Ma so banh xe: " << m_maSo <<'\n';
    std::cout<< "Hang san xuat: " << m_hangSanXuat <<'\n';
    std::cout<< "Loai banh xe: "  << m_loai <<'\n';
    std::cout<< "Don gia: " << m_donGia <<'\n';
}
BanhXe::~BanhXe(){}