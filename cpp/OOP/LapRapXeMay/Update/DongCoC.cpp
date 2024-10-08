#include "DongCoC.h"
#include <string>
#include <iostream>

DongCoC::DongCoC() = default;
DongCoC::DongCoC(std::string maso, std::string loai , std::string hangSX):DongCo(maso,loai,hangSX)
{
    m_donGia = 400;   
}
void DongCoC::input()
{
    DongCo::input();
    m_loai = "C";
    m_donGia = 400;   
    
}
void DongCoC::output()
{
    DongCo::output();
}
DongCoC::~DongCoC(){}