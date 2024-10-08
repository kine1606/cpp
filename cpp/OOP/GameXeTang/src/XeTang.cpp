#include "../inc/XeTang.h"
#include <iostream>
#include "../inc/Boss.h"
#include "../inc/VatPhamDanDuoc.h"
#include "../inc/VatPhamSinhMenh.h"
XeTang::XeTang()
{
    m_HP = 10;
}
XeTang::XeTang(std::string ten, int ID): m_ten(ten), m_ID(ID)
{
    m_HP = 10;
}
void XeTang::input()
{
    std::cout<< "Nhap ten xe tank: ";
    getline(std::cin, m_ten);
    std::cout << "Nhap ID xe tank: ";
    std::cin>> m_ID ;
    std::cin.ignore();
}
void XeTang::takeDmg(int dmgTaken)
{
    m_HP -= dmgTaken;
}
void XeTang::TrangBiVatPham(VatPham* rhsVP)
{
    BOSS
}
bool XeTang::isDead()
{
    if(m_HP < 0) return true;
    return false;
}
void XeTang::output()
{
    std::cout<< m_ten << " " << m_ID <<'\n';
}