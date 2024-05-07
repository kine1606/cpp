#include "NhanVien.h"
#include <string>
#include <iostream>
NhanVienSanXuat::NhanVienSanXuat() = default;
NhanVienSanXuat::NhanVienSanXuat(std::string name, std::string date, long long BS, 
int productCount) : NhanVien(name, date, BS)
{
    m_productCount= productCount;
}
void NhanVienSanXuat::input()
{
    NhanVien::input();
    std::cout<< "Nhap so san pham: ";
    std::cin>> m_productCount;
    std::cin.ignore();
}
void NhanVienSanXuat::output()
{
    NhanVien::output();
    std::cout<< "So san pham hoan thien: "<< m_productCount <<'\n';
    std::cout<< "Luong thuc lanh: " << realSalery() <<'\n';
}
long long NhanVienSanXuat::realSalery()
{
    return m_basicSalery + m_productCount*2000;
}
NhanVienSanXuat::~NhanVienSanXuat(){}