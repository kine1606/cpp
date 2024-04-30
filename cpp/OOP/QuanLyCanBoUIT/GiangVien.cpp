
#include <iostream>
#include "CanBo.h"
#include "GiangVien.h"
std::istream& operator>> (std::istream& in, GiangVien& x)
{
    // CanBo::operator>>(in, x);
    std::cout<< "Nhap so gio nghien cuu:";
    in>> x.m_researchTime ;
    std::cout<< "Nhap so gio giang day: ";
    in>> x.m_teachingTime ;
    std::cout<< "Don Gia:";
    int donGia;
    in>> donGia ;
    x.salery(donGia);
    return in;
}
GiangVien::GiangVien() = default;
GiangVien::GiangVien(std::string series, std::string name, std::string sex, int teachingTime, int researchTime): CanBo(series,name,sex)
{
    // m_series = series;
    // m_name = name;
    // m_sex = sex;
    m_researchTime = researchTime;
    m_teachingTime = teachingTime;
}
void GiangVien::setResearchTime(int RT){m_researchTime = RT;}
void GiangVien::setTeachingTime(int TT){m_teachingTime = TT;}
int GiangVien::getResearchTime(){return m_researchTime;}
int GiangVien::getTeachingTime(){return m_teachingTime;}

void GiangVien::salery(const int& DonGia) 
{
    m_salery = (m_researchTime + m_teachingTime) * DonGia;
}
void GiangVien::input()
{
    CanBo::input();
    std::cout<< "Nhap so gio nghien cuu:";
    std::cin>> m_researchTime ;
    std::cout<< "Nhap so gio giang day: ";
    std::cin>> m_teachingTime ;
        std::cout<< "Don Gia:";
    int donGia;
    std::cin>> donGia ;
    salery(donGia);
}
void GiangVien::output()
{
    CanBo::output();
    std::cout<< "So gio nghien cuu: "<< m_researchTime <<'\n';
    std::cout<< "So gio giang day: "<< m_teachingTime<<'\n';
    std::cout<< "Luong= " << m_salery <<'\n';
}
GiangVien::~GiangVien(){}
