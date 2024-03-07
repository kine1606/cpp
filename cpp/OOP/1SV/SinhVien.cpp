#include "SinhVien.h"
#include <iostream>
#include <string>
SinhVien::SinhVien(){};
// init constructor
SinhVien::SinhVien(int MSSV, std::string name, double math, double literature)
{
    m_MSSV = MSSV;
    m_name = name;
    m_math = math;
    m_literature = literature;
    m_average = (m_math + m_literature)/2;
}
void SinhVien::input()
{
    std::cout<< "Nhap MSSV: ";
    std::cin>> m_MSSV ;
    std::cout<< "Nhap ho ten: ";
    std::cin.ignore();
    std::getline(std::cin, m_name);
    do
    {
        std::cout<< "Nhap diem toan: ";
        std::cin>> m_math;
    } while (m_math < 0 || m_math > 10);
    do
    {
        std::cout<< "Nhap diem van: ";
        std::cin>> m_literature;
        if(m_literature < 0 || m_literature > 10) std::cout<< "Nhap lai diem van: ";
    } while (m_literature < 0 || m_literature > 10);
    m_average = (m_math + m_literature)/2;
}
void SinhVien::output()
{
    std::cout<< "=========================================" <<'\n';
    std::cout<< "MSSV: " << m_MSSV <<'\n';
    std::cout<< "Ho va ten: " << m_name <<'\n';
    std::cout<< "Diem Toan: " << m_math <<'\n';
    std::cout<< "Diem Van: "  << m_literature <<'\n';
    std::cout<< "Diem trung binh: " << m_average <<'\n';
}
void SinhVien::rank()
{
    std::cout<< "Hoc luc: " ;
    if(m_average < 5.0) std::cout<< "Kem";
    else if( 5.0 <= m_average < 6.5) std::cout<< "Trung binh" ;
    else if(6.5 <= m_average < 8.0) std::cout << "Tien tien";
    else if(8.0 <= m_average < 9.5) std::cout << "Gioi";
    else std::cout<< "Xuat sac";
}
SinhVien::~SinhVien(){}