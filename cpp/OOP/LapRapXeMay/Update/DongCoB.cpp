#include "DongCoB.h"
#include <string>
#include <iostream>

DongCoB::DongCoB() = default;
DongCoB::DongCoB(std::string maso, std::string loai , std::string hangSX):DongCo(maso,loai,hangSX){}
void DongCoB::input()
{
    DongCo::input();
    m_loai = "B";
    std::cout<< "Nhap tieu chuan" <<'\n';
    std::cin>> m_tieuChuan;
    if(m_tieuChuan == 1) m_donGia = 600;
    if(m_tieuChuan == 2) m_donGia = 700;
    if(m_tieuChuan == 3) m_donGia = 800;
    std::cin.ignore();
}
void DongCoB::output()
{
    DongCo::output();
    std::cout<< "Loai dong co: " << m_loai << "-" << m_tieuChuan <<'\n';
}
DongCoB::~DongCoB(){}