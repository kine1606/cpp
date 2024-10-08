#include "../inc/KhachHang.h"
#include <string>
#include <iostream>

KhachHang::KhachHang() = default;
KhachHang::KhachHang(std::string maso, std::string ten, std::string sdt, std::string diachi)
    :m_maSoKH(maso), m_tenKH(ten), m_sdt(sdt), m_diaChi(diachi){};
void KhachHang::input()
{
    std::cout<< "  Thong tin khach hang:" <<'\n';
    std::cout<< "\t Ma khach hang: ";
    getline(std::cin, m_maSoKH);
    std::cout<< "\t Ten khach hang: ";
    getline(std::cin, m_tenKH);
    std::cout<< "\t Dia chi: ";
    getline(std::cin, m_diaChi);
    std::cout<< "\t So dien thoai: ";
    getline(std::cin, m_sdt);
}
void KhachHang::output()
{
    std::cout<< "\t Thong tin khach hang: <" << m_maSoKH << "> <" << m_tenKH << "> <"
        << m_diaChi << "> <" << m_sdt <<">" <<'\n';
}
KhachHang::~KhachHang(){}