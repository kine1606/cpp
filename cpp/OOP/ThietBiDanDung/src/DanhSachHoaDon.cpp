#include "../inc/DanhSachHoaDon.h"
#include "../inc/HoaDon.h"
#include <iostream>
DanhSachHoaDon::DanhSachHoaDon():m_tongDonGia(0){};

void DanhSachHoaDon::input()
{
    std::cout<< "So luong hoa don muon nhap: ";
    std::cin>> m_soLuong ;
    std::cin.ignore();
    // for (size_t i = 0; i < m_soLuong; i++)
    // {
    //     m_DSHD[i] = new HoaDon();
    // }
    m_DSHD.resize(m_soLuong);
    for (size_t i = 0; i < m_soLuong; i++)
    {   
        std::cout<< "  Nhap thong tin hoa don " << i+1 << ":" <<'\n';
        m_DSHD[i].input();
        // m_DSHD[i]->input();
    }
}
void DanhSachHoaDon::output()
{
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_DSHD[i].output();
        std::cout<< "\t Tong don gia cua hoa don " << i+1 << ": " <<  m_DSHD[i].m_donGia <<'\n';
        m_tongDonGia += m_DSHD[i].m_donGia;
        // m_DSHD[i]->output();
        // std::cout<< "\t Tong don gia cua hoa don " << i+1 << ": " <<  m_DSHD[i]->m_donGia <<'\n';
        // m_tongDonGia += m_DSHD[i]->m_donGia;
    }
    std::cout<< "TONG TAT CA HOA DON: " << m_tongDonGia <<'\n';
}
DanhSachHoaDon::~DanhSachHoaDon(){}