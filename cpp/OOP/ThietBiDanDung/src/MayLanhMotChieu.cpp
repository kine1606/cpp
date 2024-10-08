#include "../inc/MayLanhMotChieu.h"
#include <iostream>

MayLanhMotChieu::MayLanhMotChieu() = default;
void MayLanhMotChieu::input()
{
    MayLanh::input();
    std::cin.ignore();
    m_donGia = getDonGia();
}
long long MayLanhMotChieu::getDonGia()
{
    if(m_inverter) return 1500;
    return 1000;
}
void MayLanhMotChieu::output()
{
    MayLanh::output();
    std::cout<< "<1 chieu> ";
    std::cout<< "<Khong co cong nghe khang khuan> <Khong co cong nghe khu mui> ";
}
MayLanhMotChieu::~MayLanhMotChieu(){}