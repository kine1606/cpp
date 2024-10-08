#include "../inc/VatPhamSinhMenh.h"
#include <iostream>

VatPhamSinhMenh::VatPhamSinhMenh() = default;
VatPhamSinhMenh::VatPhamSinhMenh(std::string ten, int ID):VatPham(ten, ID){}
void VatPhamSinhMenh::input()
{
    VatPham::input();
    std::cout<< "Nhap so luong mau hoi: ";
    std::cin>> m_soMauHoi ;
}
int VatPhamSinhMenh::getSoMauHoi()
{
    return m_soMauHoi;
}
VatPhamSinhMenh::~VatPhamSinhMenh(){}