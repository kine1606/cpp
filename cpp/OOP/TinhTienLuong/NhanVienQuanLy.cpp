#include "NhanVien.h"
#include <string>
#include <iostream>
NhanVienQuanLy::NhanVienQuanLy() = default;
NhanVienQuanLy::NhanVienQuanLy(std::string name, std::string date, long long BS, int coeff, 
long long reward) : NhanVien(name, date, BS)
{
    m_coeff = coeff;
    m_reward = reward;
}
void NhanVienQuanLy::input()
{
    NhanVien::input();
    std::cout<< "Nhap he so chuc vu: ";
    std::cin>> m_coeff ;
    std::cout<< "Nhap so tien thuong: ";
    std::cin>> m_reward ;
    std::cin.ignore();
}
void NhanVienQuanLy::output()
{
    NhanVien::output();
    std::cout<< "He so chuc vu: "<< m_coeff <<'\n';
    std::cout<< "So tien thuong: "<< m_reward <<'\n';
    std::cout<< "Luong thuc lanh: " << realSalery() <<'\n';
}
long long NhanVienQuanLy::realSalery()
{
    return m_basicSalery*m_coeff + m_reward;
}
NhanVienQuanLy::~NhanVienQuanLy(){}