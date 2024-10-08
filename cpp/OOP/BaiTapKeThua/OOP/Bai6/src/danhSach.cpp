#include "../inc/danhSach.h"
#include "../inc/Cattle.h"
#include "../inc/Cow.h"
#include "../inc/Goat.h"
#include "../inc/Sheep.h"
#include <iostream>
danhSach::danhSach() = default;
void danhSach::input()
{
    std::cout<< "Nhap so luong: ";
    std::cin>> m_soLuong ;
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSach[i] = new Cattle();
    }
    for (size_t i = 0; i < m_soLuong; i++)
    {
        std::cout<< "1-Bo, 2-Cuu, 3-De: ";
        int x;
        std::cin>> x ;
        switch (x)
        {
        case 1: 
            m_danhSach[i] = new Cow();
            break;
        case 2:
            m_danhSach[i] = new Sheep();
            break;       
        case 3:
            m_danhSach[i] = new Goat();
            break;      
        }
    }
}
void danhSach::output()
{
    for (size_t i = 0; i < m_soLuong; i++)
    {
        m_danhSach[i]->speak();
        std::cout << "Milk: " << m_danhSach[i]->getMilk() << '\n';
        std::cout << "Child count: " <<m_danhSach[i]->getChild() << '\n';
    }
    
}
danhSach::~danhSach()
{
    for (size_t i = 0; i < m_soLuong; i++)
    {
        delete m_danhSach[i];
    }
    
}