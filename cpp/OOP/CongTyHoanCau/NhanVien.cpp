#include "NhanVien.h"
#include <string>
#include <iostream>
NhanVien::NhanVien() = default;
NhanVien::NhanVien(std::string series, std::string name, unsigned age, std::string PN,
std::string email, long long BS)
{
    m_series = series;
    m_name = name;
    m_age = age;
    m_phoneNumber = PN;
    m_email = email;
    m_basicSalery = BS;
}
std::string NhanVien::getName()
{
    return m_name;
}
void NhanVien::input()
{
    std::cout << "Nhap ma nhan vien: ";
    getline(std::cin, m_series);

    std::cout<< "Nhap ten: ";
    getline(std::cin, m_name);

    std::cout << "Nhap so tuoi: ";
    std::cin >> m_age;
    std::cin.ignore();

    std::cout << "Nhap so dien thoai: ";
    getline(std::cin, m_phoneNumber);

    std::cout<< "Nhap email: ";
    getline(std::cin, m_email);

    std::cout<< "Nhap luong co ban: ";
    std::cin>> m_basicSalery ;
}
void NhanVien::output()
{
    std::cout<< "=================================" <<'\n';
    std::cout << "Ma nhan vien: " << m_series << '\n';
    std::cout<< "Ho ten: " << m_name <<'\n';
    std::cout<< "Tuoi: "<< m_age <<'\n';
    std::cout<< "SDT: " << m_phoneNumber <<'\n';
    std::cout<< "Email: " << m_email <<'\n';
    std::cout<< "Luong co ban: " << m_basicSalery <<'\n';
}
NhanVien::~NhanVien(){}