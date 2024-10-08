#include "../inc/ThietBiDanDung.h"
#include <iostream>
#include <string>

ThietBiDanDung::ThietBiDanDung() = default;
// ThietBiDanDung::ThietBiDanDung(std::string)
long long ThietBiDanDung::getDonGia() 
{
    return 0;
}
void ThietBiDanDung::input()
{
    std::cout<< "\t\t Nhap ma: ";
    getline(std::cin, m_maSP);
    std::cout<< "\t\t Ten san pham: ";
    getline(std::cin, m_tenSP);
    std::cout << "\t\t Noi san xuat: ";
    getline(std::cin, m_hangSanXuat);
}
void ThietBiDanDung::output()
{
}
ThietBiDanDung::~ThietBiDanDung(){}