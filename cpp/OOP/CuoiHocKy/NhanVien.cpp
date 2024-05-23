#include "NhanVien.h"
#include <iostream>
#include <string>
NhanVien::NhanVien() = default;
NhanVien::NhanVien(std::string name, std::string address, std::string phoneNumb)
{
    m_name = name;
    m_address = address;
    m_phoneNumb = phoneNumb;
}
NhanVien::~NhanVien(){}
void NhanVien::input()
{
    std::cout<< "Nhap ten: ";
    getline(std::cin, m_name);
    std::cout<< "Nhap dia chi: ";
    getline(std::cin, m_address);
    std::cout<< "Nhap so dien thoai: ";
    getline(std::cin, m_phoneNumb);
}
void NhanVien::output()
{
    std::cout<< "Ho ten: " << m_name <<'\n';
    std::cout<< "Dia chi: " << m_address <<'\n';
    std::cout<< "So dien thoai: " << m_phoneNumb <<'\n';
}

NhanVienGio::NhanVienGio() = default;
NhanVienGio::NhanVienGio(std::string name, std::string address, std::string phoneNumb, int hourCount, 
int saleryPerHour): NhanVien(name, address, phoneNumb)
{
    m_saleryPerHour = saleryPerHour;
    m_hourCount = hourCount;
}
NhanVienGio::~NhanVienGio(){}
void NhanVienGio::input() 
{
    NhanVien::input();
    std::cout<< "Nhap so gio lam viec: ";
    std::cin>> m_hourCount ;
    std::cout<<  "Nhap so luong trong 1 gio: " ;
    std::cin>> m_saleryPerHour ; 
    std::cin.ignore();

}
void NhanVienGio::output() 
{
    NhanVien::output();
    std::cout<< "Tien luong:" << m_hourCount*m_saleryPerHour <<'\n';
}


NhanVienThang::NhanVienThang() = default;
NhanVienThang::NhanVienThang(std::string name, std::string address, std::string phoneNumb, 
long long salery) : NhanVien(name, address, phoneNumb)
{
    m_salery =salery;
}
NhanVienThang::~NhanVienThang(){}
void NhanVienThang::input() 
{
    NhanVien::input();
    std::cout<< "Nhap tien luong: ";
    std::cin>> m_salery ;
    std::cin.ignore();

}
void NhanVienThang::output() 
{
    NhanVien::output();
    std::cout<< "Tien luong:" << m_salery <<'\n';
}


NhanVienHoaHong::NhanVienHoaHong() = default;
NhanVienHoaHong::NhanVienHoaHong(std::string name, std::string address, std::string phoneNumb, long long sum, 
double rating): NhanVien(name, address, phoneNumb)
{
    m_sum = sum;
    m_rating = rating;
}
NhanVienHoaHong::~NhanVienHoaHong(){}
void NhanVienHoaHong::input() 
{
    NhanVien::input();
    std::cout<< "Nhap tong doanh thu: ";
    std::cin>> m_sum ;
    std::cout<<  "Nhap ti le hoa hong: " ;
    std::cin>> m_rating ; 
    std::cin.ignore();

}
void NhanVienHoaHong::output() 
{
    NhanVien::output();
    std::cout<< "Tien luong:" << m_sum*m_rating <<'\n';
}
 