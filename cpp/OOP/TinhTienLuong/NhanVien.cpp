#include "NhanVien.h"
#include <string>
#include <iostream>
NhanVien::NhanVien() = default;
NhanVien::NhanVien(std::string name, std::string birth, long long basicSalery)
{
    m_name = name;
    m_dateOfBirth = birth;
    m_basicSalery = basicSalery;
}
void NhanVien::input()
{
    std::cout<< "Nhap ten: ";
    getline(std::cin, m_name);
    std::cout<< "Nhap ngay sinh: ";
    getline(std::cin, m_dateOfBirth);
    std::cout<< "Nhap luong co ban: ";
    std::cin>> m_basicSalery ;
    // std::cin.ignore();
}
void NhanVien::output()
{
    std::cout<< "====================================" <<'\n';
    std::cout<< "Ten nhan vien: " << m_name<<'\n';
    std::cout<< "Ngay sinh: " << m_dateOfBirth <<'\n';
    std::cout<< "Luong co ban: " << m_basicSalery <<'\n';
}
std::string NhanVien::getName(){return m_name;}
