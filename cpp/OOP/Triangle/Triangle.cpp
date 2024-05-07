#include "Triangle.h"
#include "Point.h"
#include <iostream>
Triangle::Triangle() = default;
void Triangle::input()
{
    std::cout<< "Nhap diem A:\n";
    A.input();
    std::cout<< "Nhap diem B:\n";
    B.input();
    std::cout<< "Nhap diem C:\n";
    C.input();
}
void Triangle::output() const
{
    std::cout<< "Diem A:";
    A.output();
    std::cout<< "Diem B:";
    B.output();
    std::cout<< "Diem C:";
    C.output();
}
void Triangle::Move()
{
    std::cout<< "Nhap don vi tinh tien x:";
    double move_x;
    std::cin>> move_x ;
    A.set_x(A.get_x() + move_x);
    B.set_x(B.get_x() + move_x);
    C.set_x(C.get_x() + move_x);
    std::cout<< "Nhap don vi tinh tien y:";
    double move_y;
    std::cin>> move_y ;
    A.set_y(A.get_y() + move_y);
    B.set_y(B.get_y() + move_y);
    C.set_y(C.get_y() + move_y);
}
void Triangle::Zoom()
{
    std::cout<< "Nhap don vi thu phong k: ";
    double k;
    std::cin>> k ;
    A.set_point(A.get_x()*k,A.get_y()*k);
    B.set_point(B.get_x()*k,B.get_y()*k);
    C.set_point(C.get_x()*k,C.get_y()*k);
}


Triangle::~Triangle(){}


Point::Point():m_x(0),m_y(0){}
Point::Point(double x, double y):m_x(x),m_y(y){}

double Point::get_x() const{return m_x;}
double Point::get_y() const{return m_y;}
Point Point::get_point() const
{
    Point x;
    x.m_x = m_x;
    x.m_y = m_y;
    return x;
}

void Point::set_x(double x){m_x = x;}
void Point::set_y(double y){m_y = y;}
void Point::set_point(double x, double y)
{
    m_x = x;
    m_y = y;
}
void Point::input()
{
    std::cout<< "Nhap toa do x:";
    std::cin>> m_x ;
    std::cout<< "Nhap toa do y:";
    std::cin>> m_y;
}
void Point::output() const
{
    std::cout<< "(" << m_x << ", " << m_y << ")" <<'\n';
}
Point::~Point(){}