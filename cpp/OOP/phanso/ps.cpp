#include <iostream>
#include "psClass.h"

Phan_So::Phan_So()
{
    m_tu = 0;
    m_mau = 1;
}
Phan_So::Phan_So(int tu, int mau):m_tu(tu), m_mau(mau){}

void Phan_So::input() 
{
    do
    {
        std::cin>> m_tu;
        std::cin>> m_mau ;
        if(m_mau == 0)  std::cout<< "Enter again!" << '\n';
    } while (m_mau == 0);
}
int Phan_So::gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
// plus 2 fractions
void Phan_So::plus(const Phan_So& rhsPS)
{
    this->m_tu = this->m_tu * rhsPS.m_mau + this-> m_mau * rhsPS.m_tu;
    this -> m_mau = this->m_mau * rhsPS.m_mau;
}
// minus 2 fractions
void Phan_So::minus(const Phan_So& rhsPS)
{
    this->m_tu = this->m_tu * rhsPS.m_mau - this-> m_mau * rhsPS.m_tu;
    this -> m_mau = this->m_mau * rhsPS.m_mau;       
}
// mult 2 fractions
void Phan_So::mult(const Phan_So& rhsPS)
{
    this->m_tu = this->m_tu * rhsPS.m_tu;
    this -> m_mau = this->m_mau * rhsPS.m_mau;           
}
// div 2 fractions
void Phan_So::div(const Phan_So& rhsPS)
{
    this->m_tu = this->m_tu * rhsPS.m_mau;
    this -> m_mau = this->m_mau * rhsPS.m_tu;    
}
// compare 2 fractions
int Phan_So::compare(const Phan_So& ps)
{
    double x = this->m_tu*1.0 / this->m_mau*1.0;
    double y = ps.m_tu*1.0 / ps.m_mau*1.0;
    if(x > y) return 1;
    else if (x == y) return 0;
    else return -1;
    return 1;
}
// clone object
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
void Phan_So::output()
{
    if(m_mau < 0 && m_tu > 0)
        std::cout<< -m_tu << "/" << -m_mau <<'\n';
    else if(m_mau != 1)
        std::cout<< m_tu << "/" << m_mau <<'\n';
    else 
        std::cout<< m_tu <<'\n';
}