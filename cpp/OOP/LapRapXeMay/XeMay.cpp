#include "XeMay.h"
#include <string>
#include <iostream>
XeMay::XeMay() = default;
XeMay::XeMay(std::string maso, const DongCo& dc, const BanhXe& bx, const KhungXe& kx)
{
    m_msx = maso;
    m_banhXe = bx;
    m_dongCo = dc;
    m_khungXe = kx;
}
std::istream& operator>>(std::istream& in, XeMay& x)
{
    std::cout<< "Nhap ma so xe: ";
    getline(in, x.m_msx);
    in >> x.m_dongCo;
    in >> x.m_banhXe;
    in >> x.m_khungXe;
    x.m_donGia += x.m_banhXe.getDonGia() + x.m_dongCo.getDonGia() + x.m_khungXe.getDonGia();
    return in;
}
std::ostream& operator<<(std::ostream& out, const XeMay& x)
{
    out << "====================================\n";
    out << "THONG TIN XE MAY:\n";
    out << "Ma so xe may: " << x.m_msx << '\n';
    out <<'\n' <<x.m_dongCo  << '\n';
    out << x.m_banhXe  << '\n';
    out << x.m_khungXe << '\n';
    out << "Tong gia tri cua xe: " << x.m_donGia;
    return out;
}
long long XeMay::getDonGia()
{
    return m_dongCo.getDonGia() + m_banhXe.getDonGia() + m_khungXe.getDonGia();
}
XeMay::~XeMay(){}