#include <iostream>
#include "psClass.h"

Phan_So::Phan_So()
{
    m_tu = 0;
    m_mau = 1;
}
Phan_So::Phan_So(int tu, int mau):m_tu(tu), m_mau(mau){}
Phan_So::Phan_So(int tu):m_tu(tu), m_mau(1){};
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
void Phan_So::setMau(int mau){m_mau = mau;}
void Phan_So::setTu(int tu){m_tu = tu;}
void Phan_So::setPS(int tu, int mau)
{
    m_tu =  tu;
    m_mau = mau;
}
int Phan_So::getTu(){return m_tu;}
int Phan_So::getMau(){return m_mau;}
Phan_So Phan_So::getPS()
{
    Phan_So temp;
    temp.m_mau = m_mau;
    temp.m_tu = m_tu;
    return temp;
}

// plus 2 fractions
Phan_So Phan_So::operator+(const Phan_So& rhsPS)
{
    Phan_So temp;
    temp.m_tu = m_tu * rhsPS.m_mau +  m_mau * rhsPS.m_tu;
    temp.m_mau= m_mau * rhsPS.m_mau;
    temp.simplified();
    return temp;
}
// minus 2 fractions
Phan_So Phan_So::operator-(const Phan_So& rhsPS)
{
    Phan_So temp;
    temp.m_tu = this->m_tu * rhsPS.m_mau - this-> m_mau * rhsPS.m_tu;
    temp.m_mau = this->m_mau * rhsPS.m_mau;  
    temp.simplified();
    return temp;     
}
// mult 2 fractions
Phan_So Phan_So::operator*(const Phan_So& rhsPS)
{
    Phan_So temp;
    temp.m_tu = this->m_tu * rhsPS.m_tu;
    temp.m_mau = this->m_mau * rhsPS.m_mau; 
    temp.simplified();
    return temp;          
}
// div 2 fractions
Phan_So Phan_So::operator/(const Phan_So& rhsPS)
{
    Phan_So temp;
    temp.m_tu = this->m_tu * rhsPS.m_mau;
    temp.m_mau = this->m_mau * rhsPS.m_tu;
    temp.simplified();
    return temp;    
}

bool Phan_So::operator<=(const Phan_So& rhsPS)
{
    double hihi = m_tu/m_mau;
    double haha = rhsPS.m_tu/rhsPS.m_mau;
    if(hihi <= haha) return true;
    return false;
}
bool Phan_So::operator>=(const Phan_So& rhsPS)
{
    double hihi = m_tu/m_mau;
    double haha = rhsPS.m_tu/rhsPS.m_mau;
    if(hihi >= haha) return true;
    return false;
}
bool Phan_So::operator<(const Phan_So& rhsPS)
{
    double hihi = m_tu/m_mau;
    double haha = rhsPS.m_tu/rhsPS.m_mau;
    if(hihi < haha) return true;
    return false;
}
bool Phan_So::operator>(const Phan_So& rhsPS)
{
    double hihi = m_tu/m_mau;
    double haha = rhsPS.m_tu/rhsPS.m_mau;
    if(hihi > haha) return true;
    return false;
}
bool Phan_So::operator==(const Phan_So& rhsPS)
{
    double hihi = m_tu/m_mau;
    double haha = rhsPS.m_tu/rhsPS.m_mau;
    if(hihi == haha) return true;
    return false;
}
bool Phan_So::operator!=(const Phan_So& rhsPS)
{
    double hihi = m_tu/m_mau;
    double haha = rhsPS.m_tu/rhsPS.m_mau;
    if(hihi != haha) return true;
    return false;
}

void Phan_So::clone (const Phan_So& ps)
{
    this -> m_tu = ps.m_tu;
    this -> m_mau = ps.m_mau;
}
void Phan_So::Phan_So::simplified()
{
    int ucln = gcd (m_tu, m_mau);
    m_tu = m_tu / ucln;
    m_mau = m_mau / ucln;       
}

// istream & ostream 
std::istream& operator>> (std::istream& in, Phan_So& x)
{
    std::cout<< "Nhap tu:" ;
    in >> x.m_tu;
    do
    {
        std::cout<< "Nhap mau:";
        in>> x.m_mau;
        if(x.m_mau == 0)  std::cout<< "?";
    } while (x.m_mau == 0);    
    return in;
}
std::ostream& operator<< (std::ostream& out, const Phan_So& x)
{
    if(x.m_mau < 0 && x.m_tu > 0)
        out << -x.m_tu << "/" << -x.m_mau <<'\n';
    else if(x.m_mau != 1)
        out << x.m_tu << "/" << x.m_mau <<'\n';
    else 
        out << x.m_tu <<'\n';
    return out;
}