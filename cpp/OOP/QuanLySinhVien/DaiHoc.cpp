#include "DaiHoc.h"
DaiHoc::DaiHoc() = default;
DaiHoc::DaiHoc(std::string name, std::string series, 
std::string address, int credit, double average, std::string thesis_name, double thesis_mark):SinhVien(name, series, address, credit, average)
{
    m_thesis_mark = thesis_mark;
    m_thesis_name = thesis_name;
}
void DaiHoc::input()
{
    std::cout<< "Dai hoc" <<'\n';
    SinhVien::input();
    std::cout << "Nhap ten luan van: ";
    getline(std::cin, m_thesis_name);
    std::cout << "Nhap diem luan van: ";
    std::cin>> m_thesis_mark ;
    std::cin.ignore();
}
void DaiHoc::output()
{
    SinhVien::output();
    std::cout<< "Ten luan van: " << m_thesis_name << '\n';
    std::cout<< "Diem luan van: "<< m_thesis_mark <<'\n';
    if(isGraduate())
    {
        std::cout<< "Du dieu kien tot nghiep!" <<'\n';
    }
    else
    {
        std::cout<< "Khong du dieu kien tot nghiep!" <<'\n';
    }
}
bool DaiHoc::isGraduate()
{
    if(m_credit >= 170 && m_average >= 5 && m_thesis_mark >= 5) return true;
    return false;  
}
DaiHoc::~DaiHoc(){}