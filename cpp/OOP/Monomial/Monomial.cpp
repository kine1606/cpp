#include "Monomial.h"
#include <iostream>
#include <cmath>
Monomial::Monomial():m_coeff(0),m_degree(0){};
Monomial::Monomial(const double& coeff, const double& degree):m_coeff(coeff),m_degree(degree){};
void Monomial::input()
{
    std::cout<< "Nhap bac cua x: ";
    std::cin>> m_degree ;
    std::cout<< "Nhap he so cua x:";
    std::cin>> m_coeff ;
}
void Monomial::output()
{
    std::cout<< "Don thuc: ";
    if(m_degree == 0)
    {
        std::cout<< m_coeff << '\n';
    }
    else if(m_degree >=1)
    {
        if(m_degree==1)
        {
            std::cout<< m_coeff << "x" <<'\n';
        }
        else 
        {
            std::cout<< m_coeff << "x^" << m_degree <<'\n';
        }
    }
    else 
    {
        if(m_degree== -1)
            std::cout<< m_coeff << "/x" << '\n';
        else 
            std::cout<< m_coeff << "/x^" << m_degree <<'\n';
    }
    std::cout<< "========================" <<'\n';
}

double Monomial::Calc_x0(const int& x)
{
    double sum(0);
    sum = m_coeff * pow(x,m_degree);
    return sum;
}
void Monomial::change_Monomial()
{
    std::cout<< "========================" <<'\n';
    std::cout<< "0 || >2. Thoat" <<'\n';
    std::cout<< "1. Doi he so " <<'\n';
    std::cout<< "2. Doi bac don thuc" <<'\n';
    while(true)
    {
        std::cout<< "Nhap n:";
        int n;
        std::cin>> n;
        if(n ==0 || n>2) 
        {
            std::cout<< "Da thoat!" <<'\n';
            return;
        }
        else if(n==1)
        {
            std::cout<< "Nhap he so moi: ";
            std::cin>> this->m_coeff;
        }
        else
        {
            std::cout<< "Nhap bac moi: ";
            std::cin>> this->m_degree;
        }
        std::cout<< "Da thay doi!" <<'\n';
    }
}
Monomial Monomial::derivative()
{
    Monomial Temp;
    if(m_degree == 0)   
    {
        Temp.m_degree = 0;
        Temp.m_coeff =0;
        return Temp;
    }
    Temp.m_degree = m_degree-1;
    Temp.m_coeff = m_coeff*(m_degree);
    return Temp;
}
Monomial Monomial::sum_Monomial(const Monomial& rhsM)
{
    Monomial Temp;
    Temp.m_degree = m_degree;
    Temp.m_coeff = m_coeff + rhsM.m_coeff;
    return Temp;
}
Monomial::~Monomial(){}