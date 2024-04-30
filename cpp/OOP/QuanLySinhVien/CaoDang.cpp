#include "CaoDang.h"
CaoDang::CaoDang() = default;
CaoDang::CaoDang(std::string name,std::string series, std::string address, int credit, 
double average, double graduate) :   SinhVien(name, series, address, credit, average)
{
    m_graduate = graduate;
}
void CaoDang::input()
{
    std::cout<< "Cao dang"<<'\n';
    SinhVien::input();
    std::cout<< "Nhap diem thi tot nghiep: ";
    std::cin>> m_graduate;
    std::cin.ignore();
}
void CaoDang::output()
{
    SinhVien::output();
    std::cout<< "Diem thi tot nghiep: "<< m_graduate <<'\n';
    if(isGraduate())
    {
        std::cout<< "Du dieu kien tot nghiep!" <<'\n';
    }
    else
    {
        std::cout<< "Khong du dieu kien tot nghiep!" <<'\n';
    }
}
bool CaoDang::isGraduate()
{
    if(m_credit >= 120 && m_average >=5 && m_graduate >=5) return true;
    return false;
}
CaoDang::~CaoDang(){}