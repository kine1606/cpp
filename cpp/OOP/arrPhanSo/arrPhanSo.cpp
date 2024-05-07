#include "PhanSo.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <algorithm>
PhanSo::PhanSo():m_tu(0),m_mau(1){};
PhanSo::PhanSo(int tu, int mau):m_tu(tu),m_mau(mau){};
// io
void PhanSo::input()
{
    std::cout<< "Nhap tu & mau:";
    std::cin>> m_tu;
    do
    {
        std::cin>> m_mau;
        if(m_mau == 0) std::cout<< "nhap lai mau:";
    } while (m_mau == 0);
    data = m_tu*1.0 / m_mau*1.0;
}

void PhanSo::output() const
{
    if(m_tu == 0)
        std::cout<< 0 << " ";
    
    else if(m_tu*m_mau > 0)
    {
        if(m_mau == 1)
            std::cout<< m_tu << " ";
        else
            std::cout<< m_tu << "/" << m_mau << " ";
    }
    else 
    {
        if(m_mau == 1)
            std::cout<< m_tu << " ";
        else 
            std::cout<< "-" << m_tu << "/" << m_mau << " ";
    } 
}

// get
int PhanSo::getTuSo() const{return m_tu;}
int PhanSo::getMauSo() const{return m_mau;}
PhanSo PhanSo::getPhanSo() const 
{
    PhanSo temp;
    temp.m_tu = m_tu;
    temp.m_mau = m_mau;
    return temp;
}

// set 
void PhanSo::setPhanSo(int x, int y)
{
    m_tu = x;
    m_mau = y;
}
void PhanSo::setTuSo(const int& x){m_tu = x;}
void PhanSo::setMauSo(const int& x){m_mau =x;}

bool PhanSo::isPrime() const
{
    if(m_tu <=1) return false;
    int hihi = m_tu/2;
    for (size_t i = 2; i <= hihi ; i++)
    {
        if(m_tu % i==0)
        {
            return false;
        }
    }
    return true;
}

int PhanSo::gcd(int a, int b) const
{
    if(b==0) return a;
    return gcd(b,a%b);
}

void PhanSo::simplified()
{
    int x = gcd(abs(m_tu), abs(m_mau));
    this->m_tu = m_tu/x;
    this->m_mau = m_mau/x;
}
void PhanSo::random_setPhanSo()
{
    srand(time(NULL));
    m_tu = rand();
    m_mau= rand();
}
PhanSo::~PhanSo(){}

/////////////////////////////////////////////////////

arrPhanSo::arrPhanSo() = default;
arrPhanSo::arrPhanSo(int n):m_number(n),m_arrPS(new PhanSo[n]){};
// i&o
void arrPhanSo::inputArrPS()
{
    std::cout<< "Nhap so phan tu:";
    std::cin>> m_number ;
    m_arrPS = new PhanSo[m_number];
    for (size_t i = 0; i < m_number; i++)
    {
        m_arrPS[i].input();
    }
}
void arrPhanSo::outputArrPS()
{
    for (size_t i = 0; i < m_number; i++)
    {
        m_arrPS[i].output();
    }
}

void arrPhanSo::random_inputArrPS()
{
    std::cout<< "Nhap so phan tu:";
    std::cin>> m_number ;
    m_arrPS = new PhanSo[m_number];
    for (size_t i = 0; i < m_number; i++)
    {
        m_arrPS[i].random_setPhanSo();
    }
}

int arrPhanSo::PrimeCount()
{
    int count(0);
    for (size_t i = 0; i < m_number; i++)
    {
        if(m_arrPS[i].isPrime())
        {
            count++;
        }
    }
    return count;
}

void arrPhanSo::simplified()
{
    for (size_t i = 0; i <m_number; i++)
    {
        m_arrPS[i].simplified();
    }
}
PhanSo arrPhanSo::MAX()
{
    int j(0);
    PhanSo temp;
    for (size_t i = 1; i < m_number; i++)
    {
        if(m_arrPS[i].data > m_arrPS[j].data)
        {
            j = i;
        }
    }
    temp = m_arrPS[j];
    return temp;
}
void arrPhanSo::sortArr()
{
    for (size_t i = 0; i < m_number ; i++)
    {
        int min_index = i;
        for (size_t j = i+1; j < m_number ; j++)
        {
            if(m_arrPS[min_index].data > m_arrPS[j].data)
                min_index =j;
        }
        std::swap(m_arrPS[i], m_arrPS[min_index]);
    }
}
arrPhanSo::~arrPhanSo()
{
    delete m_arrPS;
    std::cout<< "END!" <<'\n';
}   