#include "../inc/QuatDien.h"
#include <iostream>

QuatDien::QuatDien() = default;

void QuatDien::input()
{
    Quat::input();
    std::cout<< "\t\t Dung luong pin: ";
    std::cin>> m_pin ;
    m_donGia = getDonGia();
    std::cin.ignore();
}

long long QuatDien::getDonGia()
{
    return 500*m_pin;
}
void QuatDien::output()
{
    Quat::output();
    std::cout<< "<Quat sac dien> ";
    std::cout<< "<Dung luong pin: " << m_pin << "> " ;
}
QuatDien::~QuatDien(){}