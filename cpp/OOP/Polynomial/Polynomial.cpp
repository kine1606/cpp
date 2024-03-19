#include "Polynomial.h"
#include <iostream>
#include <cmath>
#include <vector>
Polynomial::Polynomial() = default;

void Polynomial::input_Polynomial()
{
    // nhap bac cua da thuc bac n
    int n;
    do
    {
        std::cout<< "Nhap bac n:";
        std::cin >> n;
    } while (n < 0);
    m_degree = n;
    while(n!=-1)
    {
        std::cout<< "Nhap he so["<< n << "]=";
        int x;
        std::cin>> x ;
        coeff.push_back(x);
        n--;
    }
}

void Polynomial::output_Polynomial() const 
{
    std::cout<< "Da thuc: ";
    if(m_degree==0)
    {
        std::cout<< coeff[0] <<'\n';
    }
    else 
    {
        for (size_t i = 0; i <=m_degree; i++)
        {

            int num = abs(coeff[i]);
            if(num==0) continue;
            if(i==m_degree)
            {
                if (coeff[i] !=0)
                {
                    if(coeff[i] > 0)
                        std::cout<< "+" <<coeff[i] <<'\n';
                    else 
                        std::cout<< coeff[i] <<'\n';
                }
            }
            else if(coeff[i] < 0)
            {
                std::cout<< "-" << num << "x^" << m_degree-i << " ";
            }
            else if(coeff[i] > 0)
            {
                std::cout << "+" << num << "x^" << m_degree-i << " ";
            }
        }
    }
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
Polynomial Polynomial::Plus_polynomial(const Polynomial& rhsP)
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
Polynomial Polynomial::Minus_polynomial(const Polynomial& rhsP)
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
Polynomial::~Polynomial(){}