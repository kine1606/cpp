#include "Polynomial.h"
#include <iostream>
#include <cmath>
#include <vector>
Polynomial::Polynomial() = default;

Polynomial Polynomial::operator-(const Polynomial& rhsP)
{
    Polynomial Temp;
    int chenhLech = this->m_degree - rhsP.m_degree;
    chenhLech = abs(chenhLech);
    if(this->m_degree >= rhsP.m_degree)
    {
        Temp.m_degree = this->m_degree;
        for (size_t i = 0; i <= this->m_degree; i++)
        {
            Temp.coeff.push_back(this->coeff[i]);
        } 
        for (size_t i = 0; i <= rhsP.m_degree; i++)
        {
            Temp.coeff[chenhLech+i] -= rhsP.coeff[i];
        }
    }
    else 
    {
        Temp.m_degree = rhsP.m_degree;
        for (size_t i = 0; i <= rhsP.m_degree; i++)
        {
            Temp.coeff.push_back(rhsP.coeff[i]);
        } 
        for (size_t i = 0; i <= this->m_degree; i++)
        {
            Temp.coeff[chenhLech+i] -= this->coeff[i];
        }
    }
    return Temp;    
}
Polynomial Polynomial::operator+(const Polynomial& rhsP)
{
    Polynomial Temp;
    int chenhLech = this->m_degree - rhsP.m_degree;
    chenhLech = abs(chenhLech);
    if(this->m_degree >= rhsP.m_degree)
    {
        Temp.m_degree = m_degree;
        for (size_t i = 0; i <= this->m_degree; i++)
        {
            Temp.coeff.push_back(this->coeff[i]);
        } 
        for (size_t i = 0; i <= rhsP.m_degree; i++)
        {
            Temp.coeff[chenhLech+i] += rhsP.coeff[i];
        }
    }
    else 
    {
        Temp.m_degree = rhsP.m_degree;
        for (size_t i = 0; i <= rhsP.m_degree; i++)
        {
            Temp.coeff.push_back(rhsP.coeff[i]);
        } 
        for (size_t i = 0; i <= this->m_degree; i++)
        {
            Temp.coeff[chenhLech+i] += this->coeff[i];
        }
    }
    return Temp;
}

double Polynomial::Calc_xzero(const double& x) const
{
    double sum(0);
    for (size_t i = 0; i <= m_degree; i++)
    {
        sum += coeff[i] * pow(x, m_degree-i);
    }
    return sum;
}
std::ostream& operator<<(std::ostream& out, const Polynomial& x)
{
    for (int i = 0; i < x.m_degree; i++) 
    {
        if (i > 0 && x.coeff[i]> 0) 
        {
            out << "+";
        }
    
        if (x.coeff[i] != 0) 
        {
            if (x.coeff[i] != 1 && x.coeff[i] != -1)
            {
                out << x.coeff[i];
            }
        
            if (x.m_degree -i == 0)
            {
                continue;
            }
            else if (x.m_degree -i == 1) 
            {
                out << "x";
            }
            else 
            {
                out << "x^" << x.m_degree -i;
            }
        } 
        else if (x.coeff[i] == 0) 
        {
            continue;
        }
        else if(x.m_degree -i == 0)
        {
            out << x.coeff[i];
        }
    }
    return out;
}
std::istream& operator>>(std::istream& in, Polynomial& xx)
{
    // nhap bac cua da thuc bac n
    int n;
    do
    {
        std::cout<< "Nhap bac n:";
        in >> n;
    } while (n < 0);
    xx.m_degree = n;
    while(n!=-1)
    {
        std::cout<< "Nhap he so["<< n << "]=";
        int x;
        std::cin>> x ;
        xx.coeff.push_back(x);
        n--;
    }
    return in;
}
Polynomial::~Polynomial(){}