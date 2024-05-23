#include "KhungXe.h"
#include <iostream>
#include <string>
KhungXe::KhungXe() = default;
KhungXe::KhungXe(std::string maso, std::string loai, std::string hangSX)
{
    m_maSo = maso;
    m_loai = loai;
    m_hangSanXuat = hangSX;
    m_donGia = donGia(loai);
}
long long KhungXe::donGia(std::string loai)
{
    if(loai == "nhom" || loai == "Nhom") return 500;
    else if(loai == "nhua" || loai == "Nhua") return 200;
    return 0;
}
std::istream& operator>> (std::istream& in, KhungXe& x)
{
    std::cout<< "Nhap ma so khung xe: ";
    getline(in, x.m_maSo);
    std::cout<< "Nhap loai khung xe (nhom || nhua): ";
    getline(in, x.m_loai);
    std::cout << "Nhap hang san xuat khung xe: ";
    getline(in, x.m_hangSanXuat);
    x.m_donGia = x.donGia(x.m_loai);
    return in;
}
std::ostream& operator<< (std::ostream& out, const KhungXe& x)
{
    out<< "THONG TIN KHUNG XE:" <<'\n';
    out<< "Ma so khung xe: " << x.m_maSo <<'\n';
    out<< "Loai khung xe: " << x.m_loai << "\n";
    out<< "Hang san xuat khung xe: " << x.m_hangSanXuat << '\n';
    out<< "Don gia khung xe: " << x.m_donGia << "\n";
    return out;
}
long long KhungXe::getDonGia()
{
    return m_donGia;
}
KhungXe::~KhungXe(){}