
#include <iostream>
#include "NhanVienHanhChinh.h"

NhanVienHanhChinh::NhanVienHanhChinh() = default;
NhanVienHanhChinh::NhanVienHanhChinh(std::string series, std::string name, std::string sex, int DaysOfWorking, int BonusHour)
{
    m_series = series;
    m_name = name;
    m_sex = sex;
    m_DaysOfWorking = DaysOfWorking;
    m_BonusHour = BonusHour;
}
void NhanVienHanhChinh::setDayOfWorking(int DOW){m_DaysOfWorking = DOW;}
void NhanVienHanhChinh::setBonusHour(int BH){m_BonusHour = BH;}

int NhanVienHanhChinh::getDayOfWorking(){return m_DaysOfWorking;}
int NhanVienHanhChinh::getBonusHour(){return m_BonusHour;}

void NhanVienHanhChinh::salery(const int& DonGia, const int& oneDayCash) 
{
    m_salery = (m_DaysOfWorking*oneDayCash) + (m_BonusHour * DonGia);
}
void NhanVienHanhChinh::input()
{
    CanBo::input();
    std::cout<< "Nhap so ngay lam viec: ";
    std::cin>> m_DaysOfWorking;
    std::cout<< "Nhap so gio lam them: ";
    std::cin>> m_BonusHour;
    std::cout<< "Don Gia:";
    int donGia;
    std::cin>> donGia ;
    std::cout<< "Tien cong 1 ngay:";
    int x;
    std::cin>> x ;
    salery(donGia, x);
}
void NhanVienHanhChinh::output()
{
    CanBo::output();
    std::cout<< "So ngay lam viec: "<< m_DaysOfWorking <<'\n';
    std::cout<< "So gio lam them: "<< m_BonusHour<<'\n';
    std::cout<< "Luong= " << m_salery <<'\n';
}
NhanVienHanhChinh::~NhanVienHanhChinh(){}
