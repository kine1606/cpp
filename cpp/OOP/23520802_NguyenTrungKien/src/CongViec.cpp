#include "../inc/CongViec.h"
#include <iostream>

CongViec::CongViec() = default;
void CongViec::input()
{
    std::cout<< "\tNHAP THONG TIN CONG VIEC:" <<'\n';
    std::cout<< "\t  ID: ";
    getline(std::cin, m_ID);
    std::cout<< "\t  Tieu De: ";
    getline(std::cin, m_tieuDe);
    std::cout<< "\t  Mo ta: ";
    getline(std::cin, m_moTa);
    std::cout<< "\t  Ngay ket thuc: ";
    getline(std::cin, m_ngayKetThuc);
    std::cout<< "\t  Trang thai (1- hoan thanh, 0- chua hoan thanh): ";
    int x;
    std::cin>> x ;
    if(x) m_trangThai = true;
    else m_trangThai = false;
    std::cin.ignore() ;
    std::cout<< "\t  Nguoi tao du an: ";
    getline(std::cin, m_nguoiTao);
    std::cout<< "\t  Nguoi thuc hien: ";
    getline(std::cin, m_nguoiThucHien);
}
void CongViec::output()
{
    std::cout<< "\t XUAT THONG TIN CONG VIEC: " <<'\n';
    std::cout<< "\t  ID:" << m_ID <<'\n';
    std::cout<< "\t  Tieu de:" << m_tieuDe <<'\n';
    std::cout<< "\t  Mo ta:" << m_moTa <<'\n';
    std::cout<< "\t  Ngay ket thuc:" << m_ngayKetThuc <<'\n';
    std::cout<< "\t  Trang thai:" << m_trangThai <<'\n';
    std::cout<< "\t  Nguoi tao du an:" << m_nguoiTao <<'\n';
    std::cout<< "\t  Nguoi thuc hien:" << m_nguoiThucHien <<'\n';
}
CongViec::~CongViec(){}