#include <iostream>
#include <cmath>
#include "Point.h"
//default constructor
Point::Point()
{
    m_x = 0;
    m_y = 0;
}

// init constructor
Point::Point(double x, double y): m_x(x), m_y(y){};

void Point::input()
{
    std::cout<< "Nhap hoanh do x: ";
    std::cin>> m_x ;
    std::cout<< "Nhap tung do y: " ;
    std::cin>> m_y ;
}

// calculate the distance of 2points
double Point::calc(const Point& rhsPoint)
{
    double x = (m_x - rhsPoint.m_x);
    double y = (m_y - rhsPoint.m_y);
    return sqrt(x*x + y*y);
}

void Point::output(const Point& rhsPoint, const double& distance)
{
    std::cout<< "===============================" <<'\n';
    std::cout<< "Diem dau tien(" << m_x << ", " << m_y << ")"<<'\n';
    std::cout<< "Diem thu hai (" << rhsPoint.m_x << ", " << rhsPoint.m_y << ")" <<'\n';
    std::cout<< "Khoang cach giua 2 diem: " << distance;
}

Point::~Point(){}