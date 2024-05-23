#include "HoaDon.h"
#include <iostream>
#include <string>
HoaDon::HoaDon() = default;
void HoaDon::input()
{
    std::cout<< "Nhap so hoa don: ";
    getline(std::cin, m_series);
    std::cout<< "Nhap ngay hoa don: ";
    getline(std::cin, m_date);
    std::cout<< "Nhap so luong hang hoa: ";
    std::cin>> m_countList;
    std::cin.ignore();
    std::cout<< "Nhap danh sach hang hoa: ";
    for (size_t i = 0; i < m_countList; i++)
    {
        m_list[i].input();
        m_sumAll += m_list[i].getSum();
    }
}
void HoaDon::output()
{
    std::cout<< "So hoa don: "<< m_series <<'\n';
    std::cout<< "Ngay hoa don: " << m_date <<'\n';
    std::cout<< "Danh sach hang hoa: " <<'\n';
    for (size_t i = 0; i < m_countList; i++)
    {
        m_list[i].output()    ;
    }
    std::cout<< "Tong chi: " << m_sumAll <<'\n';
}
HoaDon::~HoaDon(){}

HangHoa::HangHoa() = default;
HangHoa::~HangHoa(){}
void HangHoa::input()
{
    std::cout<< "Nhap ten san pham: ";
    getline(std::cin, m_name);
    std::cout<< "Nhap so luong san pham: ";
    std::cin>> m_quantity ;
    std::cout<< "Nhap don gia: ";
    std::cin>> m_price ;
    std::cin.ignore();
}
void HangHoa::output()
{
    std::cout<< "Ten san pham: " << m_name <<'\n';
    std::cout<< "So luong: " << m_quantity <<'\n';
    std::cout<< "Don gia: " << m_price <<'\n';
}
long long HangHoa::getSum()
{
    return m_quantity* m_price;
}