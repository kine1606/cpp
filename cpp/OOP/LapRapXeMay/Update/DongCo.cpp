#include "DongCo.h"
#include <iostream>
#include <string>
DongCo::DongCo() = default;
DongCo::DongCo(std::string maso, std::string loai, std::string hangSX)
{
    m_maSo = maso;
    m_loai = loai;
    m_hangSanXuat = hangSX;
}
void DongCo::input()
{
    std::cout<< "NHAP THONG TIN DONG CO: " <<'\n';
    std::cout<< "Nhap ma so dong co: ";
    getline(std::cin, m_maSo);
    std::cout<< "Nhap hang san xuat dong co: ";
    getline(std::cin, m_hangSanXuat);
}
void DongCo::output()
{
    std::cout<< "\nTHONG TIN DONG CO: " <<'\n';
    std::cout<< "Ma so dong co: " << m_maSo <<'\n';
    std::cout<< "Hang san xuat dong co: "<< m_hangSanXuat <<'\n';
    std::cout<< "Loai dong co: " << m_loai <<'\n';
    std::cout<< "Don gia: " << m_donGia <<'\n';
}
DongCo::~DongCo(){}