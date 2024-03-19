#include "cHocSinh.h"
#include <iostream>
cHocSinh::cHocSinh() = default;
void cHocSinh::input()
{
    std::cout<< "Nhap MSSV: ";
    std::cin>> m_MSSV;
    std::cin.ignore();
    std::cout<< "Nhap ho ten: ";
    std::getline(std::cin, m_name);
    std::cout<< "Nhap gioi tinh: ";
    std::getline(std::cin, m_sex);
    do
    {
    std::cout<< "Nhap ngay, thang, nam sinh: ";
    std::cin>> m_bday >> m_bmonth >> m_byear;
    } while (m_byear < 0 || m_bmonth <0 || m_bmonth >12 || m_bday <0);

    std::cout<< "Nhap diem toan, van, anh: ";
    std::cin>> m_math >> m_literature >> m_engrisk;
    m_average = (m_math + m_literature + m_engrisk)/3;
}
void cHocSinh::output()
{
    std::cout<< "=====================================" <<'\n';
    std::cout << "MSSV: " << m_MSSV << '\n';
    std::cout << "Ho ten: " << m_name << '\n';
    std::cout << "Gioi tinh: " << m_sex << '\n';
    std::cout << "Ngay sinh: " << m_bday << "/" << m_bmonth << "/" << m_byear << '\n';
    std::cout<< "Diem trung binh: " << m_average <<'\n';
    std::cout<< "=====================================" <<'\n';

}   
int cHocSinh::compareBirth(const cHocSinh& rhsHS)
{   
    if(m_byear < rhsHS.m_byear)
        return 1;
    else if(m_byear > rhsHS.m_byear)
        return -1;
    else 
    {
        if(m_bmonth < rhsHS.m_bmonth)
            return 1;
        else if(m_bmonth >rhsHS.m_bmonth)
            return -1;
        else 
        {
            if(m_bday < rhsHS.m_bday)
                return 1;
            else if(m_bday > rhsHS.m_bday)
                return -1;
            else return 0;
        }
    }
    // =1 : hs1 > hs2
    // =-1: hs1 < hs2
    // =0 : hs1 = hs2
    return 0;
}
int cHocSinh::compareMark(const cHocSinh& rhsHS)
{
    if(m_average < rhsHS.m_average)
        return -1;
    else if (m_average > rhsHS.m_average)
        return 1;
    else return 0;
    // =1 : hs1 < hs2
    // =-1: hs1 > hs2
    // =0 : hs1 = hs2
}
cHocSinh::~cHocSinh(){}