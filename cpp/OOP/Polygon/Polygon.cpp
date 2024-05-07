#include "Polygon.h"
#include "Point.h"
#include <iostream>
Polygon::Polygon() = default;
Polygon::Polygon(int sz):m_sz(sz), List(new Point[sz]){};
void Polygon::output() const
{
    for (size_t i = 0; i < m_sz; i++)
    {
        List[i].output();
    }
}
void Polygon::input()
{
    do
    {
        std::cout<< "Nhap so luong diem: ";
        std::cin>> m_sz;
    } while (m_sz <=2);
    List = new Point [m_sz];
    for (size_t i = 0; i < m_sz; i++)
    {
        List[i].input();
    }
}
void Polygon::output() const
{
    for (size_t i = 0; i < m_sz; i++)
    {   
        List[i].output();
    }
}
void Polygon::Zoom()
{
    std::cout<< "Nhap so thu phong: ";
    double k;
    std::cin>> k ;
    for (size_t i = 0; i < m_sz; i++)
    {
        List[i].zoom(k);
    }
}
void Polygon::Move()
{
    int temp_x;
    int temp_y;
    std::cout<< "Nhap tinh tien x:" ;
    std::cin>> temp_x ;
    std::cout<< "Nhap tinh tien y:" ;
    std::cin>> temp_y ;
    for (size_t i = 0; i < m_sz; i++)
    {
        List[i].move(temp_x, temp_y);
    }
}
Polygon::~Polygon(){}