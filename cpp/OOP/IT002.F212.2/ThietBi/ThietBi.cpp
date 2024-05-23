#include "ThietBi.h"
#include <string>
#include <iostream>
ThietBi::ThietBi() = default;
ThietBi::ThietBi(std::string hangSanXuat, int congSuat):m_hangSanXuat(hangSanXuat), m_congSuat(congSuat){}
void ThietBi::input()
{
    std::cout<< "Nhap ten hang san xuat: ";
    getline(std::cin, m_hangSanXuat);
    std::cout<< "Nhap cong suat: ";
    std::cin >> m_congSuat;
}
void ThietBi::output()
{
    std::cout<< "===================================" <<'\n';
    std::cout<< "Ten hang san xuat: " << m_hangSanXuat << '\n';
    std::cout<< "Cong suat san pham: "<< m_congSuat <<'\n';
}
ThietBi::~ThietBi(){}