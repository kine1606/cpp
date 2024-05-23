#include "ThietBiGD.h"
#include <iostream>
#include <string>
ThietBiGD::ThietBiGD() = default;
ThietBiGD::ThietBiGD(std::string hangSanXuat, int congSuat, 
int thoiGianToiDa):ThietBi(hangSanXuat, congSuat), m_thoiGianToiDa(thoiGianToiDa){}
void ThietBiGD::input() 
{
    ThietBi::input();
    std::cout<< "Nhap Thoi gian su dung toi da: ";
    std::cin>> m_thoiGianToiDa;
    std::cin.ignore();
}
void ThietBiGD::output()
{
    ThietBi::output();
    std::cout<< "Thoi gian su dung toi da: "<< m_thoiGianToiDa <<'\n';
    std::cout<< "===================================" <<'\n';

}
ThietBiGD::~ThietBiGD(){}