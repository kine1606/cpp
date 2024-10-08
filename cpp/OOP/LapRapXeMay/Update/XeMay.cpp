#include "XeMay.h"
#include "KhungXe.h"
#include "KhungXeNhom.h"
#include "KhungXeNhua.h"
#include "DongCo.h"
#include "DongCoA.h"
#include "DongCoB.h"
#include "DongCoC.h"
#include "BanhXe.h"
#include "BanhXeD.h"
#include "BanhXeE.h"
#include <string>
#include <iostream>
XeMay::XeMay() = default;
// XeMay::XeMay(std::string msx, const DongCo& dc, const BanhXe& bx,const KhungXe& kx)
//     :m_dc(dc),m_bx(bx),m_kx(kx), m_msx(msx){}

// std::istream& operator>>(std::istream& in, XeMay& x)
// {
//     std::cout<< "NHAP THONG TIN XE MAY: " <<'\n';
//     std::cout<< "Nhap ma so xe may: ";
//     getline(in, x.m_msx);
//     in >> x.m_dc;
//     in >> x.m_bx >> x.m_kx; 
//     return in;
// } 
void XeMay::input()
{
    std::cout<< "NHAP THONG TIN XE MAY: " <<'\n';
    std::cout<< "Nhap ma so xe may: ";
    getline(std::cin, m_msx);
    int x ,y ,z;
    std::cout<< "BANG CHON LAP RAP XE MAY:" <<'\n';
    std::cout<< "CHON DONG CO: " <<'\n';
    std::cout << "1. Dong co A" <<'\n';
    std::cout << "2. Dong co B" <<'\n';
    std::cout << "3. Dong co C" <<'\n';
    std::cin>> x ;
    switch (x)
    {
    case 1:
        m_dc = new DongCoA();
        break;
    case 2:
        m_dc = new DongCoB();
        break;
    case 3:
        m_dc = new DongCoC();
        break;
    }
    std::cout<< "CHON BANH XE: " <<'\n';
    std::cout << "1. Banh xe D" <<'\n';
    std::cout << "2. Banh xe E" <<'\n';
    std::cin>> y ;
    switch (y)
    {
    case 1:
        m_bx = new BanhXeD();
        break;
    case 2:
        m_bx = new BanhXeE();
        break;
    }
    std::cout<< "CHON KHUNG XE: " <<'\n';
    std::cout << "1. Khung xe nhom" <<'\n';
    std::cout << "2. Khung xe nhua" <<'\n';
    std::cin>> z ;
    switch (z)
    {
    case 1:
        m_kx = new KhungXeNhom();
        break;
    case 2:
        m_kx = new KhungXeNhua();
        break;
    }
    std::cin.ignore();
    m_dc->input();
    m_bx->input();
    m_kx->input();
}
void XeMay::output()
{
    std::cout<< "====================================" <<'\n';
    std::cout<< "XUAT THONG TIN XE MAY:\n" <<'\n';
    std::cout<< "Ma so xe may: " << m_msx << '\n';
    m_dc->output();
    m_bx->output();
    m_kx->output();
}
XeMay::~XeMay(){}