#include "../inc/CPU.h"
#include <iostream>
#include <string>
CPU::CPU() = default;
CPU::CPU(std::string maso): m_maCPU(maso){};
void CPU::input()
{
    std::cout<< "\t CPU: " <<'\n';
    std::cout<< "\t\t Ma CPU: " <<'\n';
    getline(std::cin, m_maCPU);
}
void CPU::output()
{
    std::cout<< "\t CPU: " <<'\n';
    std::cout<< "\t\t Ma CPU: " << m_maCPU <<'\n';
    std::cout<< "\t\t Loai CPU " << m_loai  <<'\n';
    std::cout<< "\t\t Don gia: " << m_donGia <<'\n';
}