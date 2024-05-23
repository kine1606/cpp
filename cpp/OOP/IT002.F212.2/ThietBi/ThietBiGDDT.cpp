#include "ThietBiGDDT.h"
#include <iostream>
#include <string>
ThietBiGDDT::ThietBiGDDT() = default;
ThietBiGDDT::ThietBiGDDT(std::string hangSanXuat, int congSuat, 
int kichThuoc):ThietBi(hangSanXuat, congSuat), m_kichThuoc(kichThuoc){}
void ThietBiGDDT::input() 
{
    ThietBi::input();
    std::cout<< "Nhap kich thuoc san pham: ";
    std::cin>>  m_kichThuoc;
    std::cin.ignore();
}
void ThietBiGDDT::output()
{
    ThietBi::output();
    std::cout<< "Kich thuoc san pham: "<< m_kichThuoc <<'\n';
    std::cout<< "===================================" <<'\n';

}
ThietBiGDDT::~ThietBiGDDT(){}