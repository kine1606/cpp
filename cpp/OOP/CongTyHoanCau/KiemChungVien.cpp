
#include "KiemChungVien.h"
#include <iostream>
KiemChungVien::KiemChungVien() = default;
KiemChungVien::KiemChungVien(std::string series, std::string name, unsigned int age, std::string PN, 
std::string email, long long BS, int errorCount) :NhanVien(series, name, age, PN, email, BS)
{
    m_errorCount = errorCount;
}
void KiemChungVien::input()
{
    std::cout<< "Nhap thong tin kiem chung vien" <<'\n';
    NhanVien::input();
    std::cout<< "Nhap so loi phat hien: ";
    std::cin>> m_errorCount ;
    std::cin.ignore();
}
void KiemChungVien::output()
{
    NhanVien::output();
    std::cout<< "So loi phat hien: " << m_errorCount <<'\n';
    std::cout<< "Luong thuc lanh: " << realSalery() <<'\n';
}
long long KiemChungVien::realSalery()
{
    return m_basicSalery + m_errorCount*50000;
}
KiemChungVien::~KiemChungVien()
{
    std::cout<< "Da Huy Kiem Chung Vien!" <<'\n';
}