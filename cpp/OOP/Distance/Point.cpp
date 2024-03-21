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

void Point::output()
{
    std::cout<< "Diem (" << m_x << ", " << m_y << ")"<<'\n';
}

double Point::get_x() {return m_x;}
double Point::get_y() {return m_y;}

// calculate the distance of 2points
double Point::calcDistance(const Point& rhsPoint)
{
    double x = (m_x - rhsPoint.m_x);
    double y = (m_y - rhsPoint.m_y);
    return sqrt(x*x + y*y);
}


void Point::LinearMove()
{
    std::cout<< "Nhap so dv tinh tien x:" ;
    int temp_x, temp_y;
    std::cin>> temp_x ;
    std::cout<< "Nhap so dv tinh tien y:" ;
    std::cin>> temp_y ;
    this->m_x = m_x + temp_x;
    this->m_y = m_y + temp_y;
    std::cout<< "Da tinh tien!" <<'\n';
}

void Point::updatePoint()
{
    std::cout<< "0.     Thoat" <<'\n';
    std::cout<< "1.     Thay doi hoanh do" <<'\n';
    std::cout<< "2.     Thay doi tung do" <<'\n';

    while(true)
    {    
        std::cout<< "Nhap so: " <<'\n';
        int n; 
        std::cin>> n ;
        if(n==0 || n>2) return;
        else if(n==1) std::cin>> m_x ;
        else std::cin>> m_y ;
        std::cout<< "Da thay doi!" <<'\n';
    }
}
Point::~Point(){}