#include "../inc/VatPham.h"
#include <iostream>
VatPham::VatPham() = default;
VatPham::VatPham(std::string ten, int ID):m_ten(ten),m_ID(ID){}
void VatPham::input()
{
    std::cout<< "Nhap ten vat pham: ";
    getline(std::cin, m_ten);
    std::cout << "Nhap ID vat pham: ";
    std::cin>> m_ID;
}

VatPham::~VatPham(){}   