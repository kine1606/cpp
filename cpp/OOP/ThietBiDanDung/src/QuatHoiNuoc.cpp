#include "../inc/QuatHoiNuoc.h"
#include <iostream>

QuatHoiNuoc::QuatHoiNuoc() = default;

void QuatHoiNuoc::input()
{
    Quat::input();
    std::cout<< "\t\t Dung tich nuoc: ";
    std::cin>> m_dungTich ;
    std::cin.ignore();
    m_donGia = getDonGia();
}
long long QuatHoiNuoc::getDonGia()
{
    return 400*m_dungTich;
}
void QuatHoiNuoc::output()
{
    Quat::output();
    std::cout<< "<Quat hoi nuoc> ";
    std::cout<< "<Dung tich nuoc: " << m_dungTich << "> ";
}
QuatHoiNuoc::~QuatHoiNuoc(){}