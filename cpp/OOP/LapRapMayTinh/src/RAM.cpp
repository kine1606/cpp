#include "../inc/RAM.h"
#include "../inc/MayTinh.h"
#include <string>
#include <iostream>
#include "../inc/RAMDDR3.h"
#include "../inc/RAMDDR4.h"

RAM::RAM() = default;
RAM::RAM(std::string maRAM, int dungLuong):m_maRAM(maRAM), m_dungLuongRAM(dungLuong){}
void RAM::input(MayTinh& rhsMT)
{
    int x;
    std::cout<< "\t RAM: " <<'\n';
    std::cout<< "\t\t So Thanh RAM (1-1 thanh, 2-2 thanh) : " <<'\n';
    std::cin>> x ;
    if(x == 1)
    {
        rhsMT.m_RAM[1] = nullptr;
    }
    int y;
    std::cout<< "\t\t Loai RAM (1-DDR3, 2-DDR4): " <<'\n';
    std::cin>> y ;
    switch (y)
    {
    case 1:
        rhsMT.m_RAM[0] = new RAMDDR3();
        if(rhsMT.m_RAM[1] != nullptr) 
            rhsMT.m_RAM[1] = new RAMDDR3();
        break;
    case 2:
        rhsMT.m_RAM[0] = new RAMDDR4();
        if(rhsMT.m_RAM[1] != nullptr) 
            rhsMT.m_RAM[1] = new RAMDDR4();
    }
    std::cout<< "\t\t Dung Luong (GB): ";
    std::cin>> m_dungLuongRAM ;
    std::cin.ignore();
    std::cout<< "Ma RAM 1: ";
    getline(std::cin, rhsMT.m_RAM[0]->m_maRAM);
    if(x == 2)
    {
        std::cout<< "\t\t Ma RAM 2: " <<'\n';
        getline(std::cin, rhsMT.m_RAM[1]->m_maRAM);
    }
}
void RAM::output()
{
    
}