#include "BanhXe.h"
#include <iostream>
#include <string>

BanhXe::BanhXe() = default;
BanhXe::BanhXe(std::string maso, std::string loai, std::string hangSX)
{
    m_maSo = maso;
    m_loai = loai;
    m_hangSanXuat = hangSX;
    m_donGia = donGia(m_loai);
}
BanhXe::BanhXe(const BanhXe& rhsBX)
{
    m_maSo = rhsBX.m_maSo;
    m_loai = rhsBX.m_loai;
    m_hangSanXuat = rhsBX.m_hangSanXuat;
    m_donGia = donGia(m_loai);
}
long long BanhXe::donGia(std::string loai)
{
    if(loai == "D") return 400;
    else if(loai =="E") return 300;
    return 0;
}
std::istream& operator>> (std::istream& in, BanhXe& x) 
{
    std::cout<< "Nhap ma so banh xe: ";
    getline(in,x.m_maSo);
    std::cout<< "Nhap loai banh xe: ";
    getline(in, x.m_loai);
    std::cout<< "Nhap hang san xuat: ";
    getline(in, x.m_hangSanXuat);
    x.m_donGia = x.donGia(x.m_loai);
    return in;
}
std::ostream& operator<< (std::ostream& out, const BanhXe& x)
{
    out<< "THONG TIN BANH XE:" <<'\n';
    out<< "Ma so banh xe: ";
    out<< x.m_maSo <<'\n';
    out<< "Loai banh xe: "<< x.m_loai <<'\n';
    out<< "Hang san xuat banh xe: " << x.m_hangSanXuat <<'\n';
    out<< "Don gia: "<< x.m_donGia <<'\n';
    return out;
}
long long BanhXe::getDonGia()
{
    return m_donGia;
}
BanhXe::~BanhXe(){}