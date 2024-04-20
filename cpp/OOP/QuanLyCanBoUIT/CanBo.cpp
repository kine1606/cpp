#include <iostream>
#include "CanBo.h"
#include <string>

CanBo::CanBo() = default;
CanBo::CanBo(std::string series, std::string name, std::string sex)
{
    m_series =series;
    m_name = name;
    m_sex = sex;
}
std::string CanBo::getName(){return m_name;}
std::string CanBo::getSeries(){return m_series;}
std::string CanBo::getSex(){return m_sex;}

void CanBo::setName(std::string name){m_name = name;}
void CanBo::setSeries(std::string series){m_series = series;}
void CanBo::setSex(std::string sex){m_sex = sex;}

void CanBo::input()
{
    std::cout<< "Nhap ma can bo: ";
    fflush(stdin);
    getline(std::cin, m_series);
    std::cout<< "Nhap ten: ";
    fflush(stdin);
    getline(std::cin, m_name);
    std::cout<< "Nhap gioi tinh: ";
    fflush(stdin);
    getline(std::cin, m_sex);
}
void CanBo::output()
{
    std::cout<< "===============================" <<'\n';
    std::cout << "Ma can bo: ";
    std::cout<< m_series <<'\n';
    std::cout<< "Ho ten: " << m_name << "\n";
    std::cout<< "Gioi tinh:" << m_sex <<'\n';
}
std::istream& operator>>(std::istream& in, CanBo& x)
{
    std::cout<< "Nhap ma can bo: ";
    fflush(stdin);
    getline(in, x.m_series);
    std::cout<< "Nhap ten: ";
    fflush(stdin);
    getline(in, x.m_name);
    std::cout<< "Nhap gioi tinh: ";
    fflush(stdin);
    getline(in, x.m_sex);
    return in;
}
std::ostream& operator<<(std::ostream& out, const CanBo& x)
{
    out<< "===============================" <<'\n';
    out << "Ma can bo: ";
    out<< x.m_series <<'\n';
    out<< "Ho ten: " << x.m_name << "\n";
    out<< "Gioi tinh:" << x.m_sex <<'\n';
    return out;
}
CanBo::~CanBo(){}