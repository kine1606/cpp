#include <iostream>
#include "Circle.h"

Circle::Circle()
{
    m_x = 0;
    m_r = 0;
    m_r = 0;
}
Circle::Circle(double x, double y, double r):m_x(x), m_y(y), m_r(r){};
void Circle::input()
{
    std::cout<< "Nhap hoanh do x: ";
    std::cin>> m_x;
    std::cout<< "Nhap tung do y: ";
    std::cin>> m_y;
    std::cout<< "Nhap ban kinh r: ";
    std::cin>> m_r ;
}
void Circle::output(const double& C, const double& S)
{
    std::cout<< "=========================" <<'\n';
    std::cout<< "Toa do tam : I(" << m_x << ", " << m_y << ")" << '\n'; 
    std::cout<< "Chu vi hinh tron: " << C << '\n';
    std::cout<< "Dien tich hinh tron: " << S <<'\n';
}
double Circle::circumference()
{
    return 2 * PI * m_r;
}
double Circle::Square()
{
    return m_r * m_r * PI;
}
Circle::~Circle()
{
    std::cout<< "END!";
}