#include "../inc/QuanTriCongViec.h"
#include <iostream>
QuanTriCongViec::QuanTriCongViec() = default;
void QuanTriCongViec::input()
{
    std::cout<< "NHAP SO LUONG USER:" <<'\n';
    std::cin>> m_soLuongUser ;
    for (size_t i = 0; i < m_soLuongUser; i++)
    {
        m_danhSachUser[i] = new User();
    }
    std::cout<< "NHAP SO LUONG DU AN:" <<'\n';
    std::cin>> m_soLuongDuAn ;
    std::cin.ignore();
    for (size_t i = 0; i < m_soLuongDuAn; i++)
    {
        m_danhSachDuAn[i] = new DuAn();
    }
    for (size_t i = 0; i < m_soLuongDuAn; i++)
    {
        m_danhSachDuAn[i]->input();
    }
    for (size_t i = 0; i < m_soLuongUser; i++)
    {
        m_danhSachUser[i]->input();
    }
}
void QuanTriCongViec::output()
{
    for (size_t i = 0; i < m_soLuongDuAn; i++)
    {
        m_danhSachDuAn[i]->setLuuTru(i%2);
        m_danhSachDuAn[i]->output();
    }
}
QuanTriCongViec::~QuanTriCongViec(){}