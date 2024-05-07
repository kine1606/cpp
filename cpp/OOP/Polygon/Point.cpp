#include "Point.h"
#include "Polygon.h"
#include <iostream>

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

void Point::zoom(double k)
{
    this->set_point(this->get_x()*k, this->get_y()*k);
}

void Point::move(double xx, double yy)
{
    this->set_point(this->get_x()+xx, this->get_y()+yy);
}

Point::~Point(){}