#include "ThietBiGDCS.h"
#include <iostream>
#include <string>
ThietBiGDCS::ThietBiGDCS() = default;
ThietBiGDCS::ThietBiGDCS(std::string hangSanXuat, int congSuat, 
int doSang):ThietBi(hangSanXuat, congSuat), m_doSang(doSang){}

void ThietBiGDCS::input() 
{
    ThietBi::input();
    std::cout<< "Nhap do sang: " ;
    std::cin>>  m_doSang;
    std::cin.ignore();
}
void ThietBiGDCS::output()
{
    ThietBi::output();
    std::cout<< "Do sang san pham: "<< m_doSang <<'\n';
    std::cout<< "===================================" <<'\n';

}
ThietBiGDCS::~ThietBiGDCS(){}