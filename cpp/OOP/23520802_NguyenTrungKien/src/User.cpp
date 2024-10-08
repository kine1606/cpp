#include "../inc/User.h"
#include <string>
#include <iostream>

User::User() = default;
User::User(std::string ten,std::string maso, std::string vaitro):m_ten(ten),m_maSo(maso),m_vaiTro(vaitro){}
void User::input()
{
    std::cout<< "NHAP THONG TIN USER:" <<'\n';
    std::cout<< "  Ten user: ";
    getline(std::cin, m_ten);
    std::cout<< "  Ma so: ";
    getline(std::cin, m_maSo);
    std::cout<< "  Vai Tro: ";
    getline(std::cin, m_vaiTro);
}
void User::output()
{
    std::cout<< "THONG TIN USER:" <<'\n';
    std::cout<< "  Ten User: " << m_ten <<'\n';
    std::cout<< "  Ma so: " << m_maSo <<'\n';
    std::cout<< "  Vai tro: " << m_vaiTro <<'\n';
}
User::~User(){}