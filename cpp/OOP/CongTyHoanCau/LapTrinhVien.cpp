
#include <iostream>
#include "LapTrinhVien.h"
LapTrinhVien::LapTrinhVien() = default;
LapTrinhVien::LapTrinhVien(std::string series, std::string name ,unsigned int age ,std::string PN, 
std::string email, long long BS, int overtime) : NhanVien(series, name, age, PN, email, BS)
{
    m_overtime = overtime;
}
void LapTrinhVien::input()
{
    std::cout<< "Nhap thong tin lap trinh vien" <<'\n';
    NhanVien::input();
    std::cout<< "Nhap so gio overtime: ";
    std::cin>> m_overtime ;
    std::cin.ignore();
}
void LapTrinhVien::output()
{
    NhanVien::output();
    std::cout<< "So gio overtime: " << m_overtime <<'\n';
    std::cout<< "Luong thuc lanh: " << realSalery() <<'\n';
} 
long long LapTrinhVien::realSalery()
{
    return m_basicSalery + m_overtime* 200000;
}
LapTrinhVien::~LapTrinhVien(){}