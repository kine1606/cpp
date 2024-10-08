#include "../inc/HoaDon.h"
#include <iostream>
#include <string>
#include "../inc/KhachHang.h"
#include "../inc/Quat.h"
#include "../inc/MayLanh.h"
#include "../inc/QuatDien.h"
#include "../inc/QuatDung.h"
#include "../inc/QuatHoiNuoc.h"
#include "../inc/MayLanhHaiChieu.h"
#include "../inc/MayLanhMotChieu.h"
HoaDon::HoaDon():m_donGia(0){};
void HoaDon::input()
{
    std::cout<< "\t Ma hoa don: ";
    getline(std::cin, m_maHD);
    std::cout<< "\t Ngay lap hoa don: ";
    getline(std::cin, m_ngayLap);
    m_kh.input();
    int x;
    std::cout<< "  Nhap danh sach cac chi tiet hoa don: " <<'\n';
    std::cout<< "    So luong chi tiet trong danh sach cac chi tiet hoa don: ";
    std::cin>> x ;
    std::cin.ignore();
    // for (size_t i = 0; i < x; i++)
    // {
    //     m_danhSachChiTiet.push_back(new ChiTiet);
    // }
    m_danhSachChiTiet.resize(x);
    for (size_t i = 0; i < x; i++)
    {
        std::cout<< "\t\t Nhap chi tiet hoa don thu " << i+1 << ":" <<'\n';
        m_danhSachChiTiet[i].input();
        this->m_donGia += m_danhSachChiTiet[i].m_ThietBi->getDonGia()* m_danhSachChiTiet[i].m_soLuongBanRa;
        // std::cout<< "\t\t Nhap chi tiet hoa don thu " << i+1 << ":" <<'\n';
        // m_danhSachChiTiet[i]->input();
        // this->m_donGia += m_danhSachChiTiet[i]->m_ThietBi->getDonGia()* m_danhSachChiTiet[i]->m_soLuongBanRa;
    }
    
    // for (size_t i = 0; i < x; i++)
    // {
    //     std::cout<< "\t\t Nhap chi tiet hoa don thu " << i+1 << ":" <<'\n';
    //     std::cout<< "\t\t\t Chon loai thiet bi dien: (1-may quat, 2-may lanh): ";
    //     int x;
    //     std::cin>> x ;
        
    //     if(x==1)
    //     {
    //         m_danhSachChiTiet[i]->m_ThietBi = new Quat();
    //         std::cout<< "\t\t\t\t Chon loai may quat: (1- dung, 2- hoi nuoc, 3- sac dien): ";
    //         int y;
    //         std::cin>> y ;
    //         if(y==1)  m_danhSachChiTiet[i]-> m_ThietBi = new QuatDung();
    //         else if(y==2) m_danhSachChiTiet[i]-> m_ThietBi = new QuatHoiNuoc();
    //         else if(y==3) m_danhSachChiTiet[i]-> m_ThietBi = new QuatDien();
    //     } 
    //     else if(x==2) 
    //     {
    //         m_danhSachChiTiet[i]-> m_ThietBi = new MayLanh();
    //         std::cout<< "\t\t\t\t Chon loai may lanh: (1- 1 chieu, 2- 2 chieu): ";
    //         int y;
    //         std::cin>> y ;
    //         if(y==1) m_danhSachChiTiet[i]-> m_ThietBi = new MayLanhMotChieu();
    //         if(y==2) m_danhSachChiTiet[i]-> m_ThietBi = new MayLanhHaiChieu();
    //     }
    //     std::cin.ignore() ;
    //     m_danhSachChiTiet[i]->input();
    //     this->m_donGia += m_danhSachChiTiet[i]->m_ThietBi->getDonGia()* m_danhSachChiTiet[i]->m_soLuongBanRa;
    // }
}
void HoaDon::output()
{
    std::cout<< "\n===================================" <<'\n';
    std::cout<< "Hoa don: " << m_maHD << " " << m_ngayLap << " " << m_donGia <<'\n';
    m_kh.output();
    std::cout<< "\t Danh sach chi tiet cac hoa don: " <<'\n';
    for (size_t i = 0; i < m_danhSachChiTiet.size(); i++)
    {
        // m_danhSachChiTiet[i]->output();
        m_danhSachChiTiet[i].output();
    }
    
}
HoaDon::~HoaDon(){}