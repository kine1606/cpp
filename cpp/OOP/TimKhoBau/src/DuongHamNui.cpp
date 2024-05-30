#include "../inc/DuongHamNui.h"
#include <iostream>

DuongHamNui::DuongHamNui()= default;
void DuongHamNui::input()
{
    std::cout<< "NHAP THONG TIN DUONG HAM NUI:" <<'\n';
    std::cout<< "Nhap do dai duong ham: ";
    int sz;
    std::cin>> sz ;
    std::cout<< "\t Chieu cao duong ham:";
    for (size_t i = 0; i < sz; i++)
    {
        int x;
        std::cin>> x ;
        m_doCao.push_back(x);
    }
}
int DuongHamNui::getSize(){
    return m_doCao.size();
}
int DuongHamNui::minVal()
{
    int x(99);
    for (size_t i = 0; i < m_doCao.size(); i++)
    {
        if(x > m_doCao[i]) 
            x = m_doCao[i];
    }
    return x;
}
DuongHamNui::~DuongHamNui(){}