#include "NhanVien.h"
#include <string>
#include <iostream>
NhanVienVanPhong::NhanVienVanPhong() = default;
NhanVienVanPhong::NhanVienVanPhong(std::string name, std::string date, long long BS, int dayCount, 
long long allowance) : NhanVien(name, date, BS)
{
    m_workingDayCount= dayCount;
    m_allowance = allowance;
}
void NhanVienVanPhong::input()
{
    NhanVien::input();
    std::cout<< "Nhap so ngay lam viec: ";
    std::cin>> m_workingDayCount ;
    std::cout<< "Nhap so tien tro cap: ";
    std::cin>> m_allowance ;
    std::cin.ignore();
}
void NhanVienVanPhong::output()
{
    NhanVien::output();
    std::cout<< "So ngay lam viec: "<< m_workingDayCount <<'\n';
    std::cout<< "So tien tro cap: "<< m_allowance <<'\n';
    std::cout<< "Luong thuc lanh: " << realSalery() <<'\n';
}
long long NhanVienVanPhong::realSalery()
{
    return m_basicSalery + m_workingDayCount*200000 + m_allowance;
}
NhanVienVanPhong::~NhanVienVanPhong(){}