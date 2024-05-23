#include "DongCo.h"
#include <string>
#include <iostream>

DongCo::DongCo() = default;
DongCo::DongCo(std::string maso, std::string loai, std::string hangSX)
{
    m_maSo = maso;
    m_loai = loai;
    m_hangSanXuat = hangSX;
    m_donGia = donGia(m_loai);
    m_tieuChuan = 0;
}
long long DongCo::donGia(std::string loai)
{
    if(loai == "A") return 500;
    else if(loai =="C") return 400;
    else
    {
        if(m_tieuChuan == 1) return 600;
        else if(m_tieuChuan ==2) return 700;
        else if(m_tieuChuan ==3) return 800;
    }
    return 0;
}
std::istream& operator>> (std::istream& in, DongCo& x)
{
    std::cout<< "Nhap ma so dong co: ";
    getline(in, x.m_maSo);
    std::cout<< "Nhap loai dong co: ";
    getline(in, x.m_loai);
    if(x.m_loai == "B")
    {
        std::cout<< "Nhap tieu chuan dong co B: ";
        in >> x.m_tieuChuan;
        in.ignore();
    }
    std::cout<< "Nhap hang san xuat dong co: ";
    getline(in, x.m_hangSanXuat);
    x.m_donGia = x.donGia(x.m_loai);
    return in;
}
std::ostream& operator<< (std::ostream& out, const DongCo& x)
{
    out << "THONG TIN DONG CO: \n";
    out << "Ma so dong co: " << x.m_maSo << '\n';
    out << "Loai dong co: " << x.m_loai;
    if(x.m_loai == "B") out<< x.m_tieuChuan << '\n';
    out << "Don gia dong co: " << x.m_donGia << '\n';
    out << "Hang san xuat dong co: " << x.m_hangSanXuat << '\n';
    return out;
}
long long DongCo::getDonGia()
{
    return m_donGia;
}
DongCo::~DongCo(){}