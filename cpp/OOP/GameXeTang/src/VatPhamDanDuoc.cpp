#include "../inc/VatPhamDanDuoc.h"
#include <iostream>

VatPhamDanDuoc::VatPhamDanDuoc() = default;
VatPhamDanDuoc::VatPhamDanDuoc(std::string ten, int ID):VatPham(ten, ID){}
void VatPhamDanDuoc::input()
{
    VatPham::input();
    std::cout<< "Nhap so lan su dung: ";
    std::cin>> m_soLanSuDung ;
    do
    {
        std::cout<< "Nhap sat thuong dan(<4):";
        std::cin>> m_satThuongDan;
    } while (m_satThuongDan >= 4);
}

VatPhamDanDuoc::~VatPhamDanDuoc(){}