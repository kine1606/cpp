#include "DongCoA.h"
#include <string>
#include <iostream>

DongCoA::DongCoA() = default;
DongCoA::DongCoA(std::string maso, std::string loai , std::string hangSX):DongCo(maso,loai,hangSX)
{
    m_donGia = 500;   
}
void DongCoA::input()
{
    DongCo::input();
    m_loai = "A";
    m_donGia = 500;   

}
void DongCoA::output()
{
    DongCo::output();
}
DongCoA::~DongCoA(){}