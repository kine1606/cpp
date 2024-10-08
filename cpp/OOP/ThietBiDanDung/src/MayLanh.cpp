#include "../inc/MayLanh.h"
#include <iostream>

MayLanh::MayLanh() = default;
void MayLanh::input()
{   
    ThietBiDanDung::input();
    std::cout<< "\t\t Inverter (0-khong co, 1-co): " ;
    int x;
    std::cin>> x ;
    if(x==1) m_inverter = true;
    else m_inverter = false;
}
void MayLanh::output()
{
    std::cout<< "\t\t+ May lanh: <" << m_maSP << "> <" << m_tenSP << "> <" << m_hangSanXuat << "> <" << m_donGia << "> ";
}
long long MayLanh::getDonGia()
{
    return 0;
}

MayLanh::~MayLanh(){}