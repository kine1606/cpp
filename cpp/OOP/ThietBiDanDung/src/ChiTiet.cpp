#include "../inc/ChiTiet.h"
#include <iostream>
#include "../inc/Quat.h"
#include "../inc/MayLanh.h"
#include "../inc/QuatDien.h"
#include "../inc/QuatDung.h"
#include "../inc/QuatHoiNuoc.h"
#include "../inc/MayLanhHaiChieu.h"
#include "../inc/MayLanhMotChieu.h"
ChiTiet::ChiTiet() = default;
void ChiTiet::input()
{
    std::cout<< "\t\t\t Chon loai thiet bi dien: (1-may quat, 2-may lanh): ";
    int x;
    std::cin>> x ;
    if(x==1)
    {
        m_ThietBi = new Quat();
        std::cout<< "\t\t\t\t Chon loai may quat: (1- dung, 2- hoi nuoc, 3- sac dien): ";
        int y;
        std::cin>> y ;
        if(y==1)  m_ThietBi = new QuatDung();
        else if(y==2)  m_ThietBi = new QuatHoiNuoc();
        else if(y==3)  m_ThietBi = new QuatDien();
    } 
    else if(x==2) 
    {
        m_ThietBi = new MayLanh();
        std::cout<< "\t\t\t\t Chon loai may lanh: (1- 1 chieu, 2- 2 chieu): ";
        int y;
        std::cin>> y ;
        if(y==1) m_ThietBi = new MayLanhMotChieu();
        if(y==2) m_ThietBi = new MayLanhHaiChieu();
    }
    std::cin.ignore();
    m_ThietBi->input();
    std::cout<< "\t So luong ban ra: ";
    std::cin>> m_soLuongBanRa ;
    std::cin.ignore();
}
void ChiTiet::output()
{
    m_ThietBi->output();
    std::cout<< "<So luong ban ra: " << m_soLuongBanRa << ">" <<'\n';
}
ChiTiet::~ChiTiet(){}