#include "psClass.h"
#include <iostream>
int main()
{
    Phan_So ps1, ps2;
    std::cin >> ps1 >> ps2;
    ps1.simplified();
    ps2.simplified();
    Phan_So tong = ps1 + ps2;
    Phan_So hieu = ps1 - ps2;
    Phan_So tich= ps1 * ps2;
    Phan_So thuong= ps1 / ps2;
    std::cout<< "ps1=" << ps1  <<'\n';
    std::cout<< "ps2=" << ps2  <<'\n';
    std::cout<< "tong= "<< tong <<'\n';
    std::cout<< "hieu=" << hieu <<'\n';
    std::cout<< "tich=" << tich <<'\n';
    std::cout<< "thuong=" << thuong <<'\n';
}