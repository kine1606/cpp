#include "SinhVien.h"
#include <iostream>
#include <string>
SinhVien::SinhVien(){};
SinhVien::SinhVien(int MSSV, std::string name, std::string sex, double math, double physic, double chemistry)
{
    m_MSSV = MSSV;
    m_name = name;
    m_sex = sex;
    m_math = math;
    m_physic = physic;
    m_chemistry = chemistry;
    m_average = (m_math + m_physic + m_chemistry)/3;
}
void SinhVien::input()
{
    std::cin>> m_MSSV ;
    std::cin.ignore();
    std::getline(std::cin, m_name);
    std::getline(std::cin, m_sex);
    std::cin>> m_math >> m_physic >> m_chemistry ;
    m_average = (m_math + m_physic + m_chemistry)/3;
}
void SinhVien::output()
{
    std::cout<< "=========================================" <<'\n';
    std::cout<< "MSSV: " << m_MSSV <<'\n';
    std::cout<< "Ho va ten: " << m_name <<'\n';
    std::cout<< "Gioi tinh: " << m_sex <<'\n';
    std::cout<< "Diem Toan: " << m_math <<'\n';
    std::cout<< "Diem Ly: " << m_physic <<'\n';
    std::cout<< "Diem Hoa: " << m_chemistry <<'\n';
    std::cout<< "Diem trung binh: " << m_average <<'\n';
    std::cout<< "=========================================" <<'\n';
}
SinhVien::~SinhVien(){}