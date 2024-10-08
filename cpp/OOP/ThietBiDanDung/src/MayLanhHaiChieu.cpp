#include "../inc/MayLanhHaiChieu.h"
#include <iostream>

MayLanhHaiChieu::MayLanhHaiChieu() = default;

void MayLanhHaiChieu::input()
{
    MayLanh::input();
    std::cout<< "\t\t Cong nghe khang khuan: (0- khong co, 1- co): ";
    int x;
    std::cin>> x ;
    if(x==1) m_khangKhuan = true;
    std::cout<< "\t\t Cong nghe khu mui: (0- khong co, 1- co): ";
    std::cin>> x ;
    if(x==1) m_khuMui = true;
    m_donGia = getDonGia();
}
long long MayLanhHaiChieu::getDonGia()
{
    long long gia(0);
    if(m_inverter) gia = 2500;
    else gia = 2000;
    if(m_khuMui) gia+= 500;
    if(m_khangKhuan) gia +=500;
    return gia;
}
void MayLanhHaiChieu::output()
{
    MayLanh::output();
    std::cout<< "<2 chieu> " ;
    if(m_khangKhuan) std::cout<< "<Co cong nghe khang khuan> ";
    if(m_khuMui) std::cout<< "<Co cong nghe khu mui> ";
}
MayLanhHaiChieu::~MayLanhHaiChieu(){}