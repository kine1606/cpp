#include "ComplexNumberOO.h"
#include <iostream>
int main()
{
    ComplexNumber ps1, ps2;
    std::cin >> ps1 >> ps2;
    ComplexNumber tong = ps1 + ps2;
    ComplexNumber hieu = ps1 - ps2;
    ComplexNumber tich= ps1 * ps2;
    ComplexNumber thuong= ps1 / ps2;
    std::cout<< "ps1=" << ps1  <<'\n';
    std::cout<< "ps2=" << ps2  <<'\n';
    std::cout<< "tong= "<< tong <<'\n';
    std::cout<< "hieu=" << hieu <<'\n';
    std::cout<< "tich=" << tich <<'\n';
    std::cout<< "thuong=" << thuong <<'\n';
}