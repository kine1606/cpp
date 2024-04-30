#include "SinhVien.h"
#include <string>
SinhVien::SinhVien() =default;
SinhVien::SinhVien(std::string name, std::string series, std::string address, int credit, double average)
{
    m_name =name;
    m_series = series;
    m_address = address;
    m_credit =credit;
    m_average = average;
}
SinhVien::~SinhVien(){}
void SinhVien::input()
{
    std::cout<< "Nhap ten: ";
    getline(std::cin, m_name);
    std::cout << "Nhap ma sinh vien: ";
    getline(std::cin, m_series);
    std::cout << "Nhap dia chi: ";
    getline(std::cin, m_address);
    std::cout << "Nhap so tin chi: ";
    std::cin >> m_credit;
    std::cout << "Nhap diem trung binh: ";
    std::cin >> m_average;
    std::cin.ignore();
}
void SinhVien::output()
{
    std::cout<< "Ho ten: " << m_name <<'\n';
    std::cout<< "Ma sinh vien: " << m_series <<'\n';
    std::cout<< "Dia chi: " << m_address <<'\n';
    std::cout<< "Tong so tin chi: " << m_credit <<'\n';
    std::cout<< "Diem trung binh: " << m_average <<'\n';
}
