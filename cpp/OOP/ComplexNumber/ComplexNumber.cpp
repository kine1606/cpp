#include <iostream>
#include "ComplexNumber.h"
#include <cmath>
// default constructor
ComplexNumber::ComplexNumber()
{
    m_real = 0;
    m_imaginary = 0;
}
// init constructor
ComplexNumber::ComplexNumber(double x, double y):m_real(x),m_imaginary(y){};

void ComplexNumber::input()
{
    std::cout<< "Nhap phan thuc: ";
    std::cin>> m_real ;
    std::cout<< "Nhap phan ao: ";
    std::cin>> m_imaginary ;
}

void ComplexNumber::output()
{
    if(m_real == 0 && m_imaginary !=0)
        std::cout<< "So thuc: " << m_imaginary << "i" <<'\n';

    else if(m_imaginary == 0 && m_real !=0)
        std::cout<< "So thuc: " << m_real <<'\n';

    else if (m_imaginary == 0 && m_real ==0) 
        std::cout<< "So thuc: " << 0 <<'\n';  

    else 
    {
        if(m_imaginary>0)
            std::cout<< "So thuc: " << m_real << " + " << m_imaginary <<"i" <<'\n';
        else 
            std::cout<< "So thuc: " << m_real << " " << m_imaginary <<"i" <<'\n';
    }
}
// sum of 2 complex numbers
ComplexNumber ComplexNumber::sum(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    temp.m_real = m_real + rhsCN.m_real;
    temp.m_imaginary = m_imaginary + rhsCN.m_imaginary;
    return temp;
}

// minus 2 complex numbers
ComplexNumber ComplexNumber::diff(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    temp.m_real = m_real - rhsCN.m_real;
    temp.m_imaginary = m_imaginary - rhsCN.m_imaginary;
    return temp;
}

// mult 2 complex numbers
ComplexNumber ComplexNumber::mult(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    temp.m_real = m_real * rhsCN.m_real - m_imaginary * rhsCN.m_imaginary;
    temp.m_imaginary = m_real * rhsCN.m_real + m_imaginary * rhsCN.m_imaginary;
    return temp;
}

// div 2 complex numbers
ComplexNumber ComplexNumber::div(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    double x = pow(m_imaginary, 2) + pow(rhsCN.m_imaginary, 2);
    temp.m_real = (m_real * rhsCN.m_real + m_imaginary * rhsCN.m_imaginary) / x;
    temp.m_imaginary = (rhsCN.m_real * m_imaginary - m_real * rhsCN.m_imaginary) / x;
    return temp;
}

// change real part 
void ComplexNumber::changeReal()
{
    std::cout<< "Nhap phan thuc moi: " ;
    double x;
    std::cin>> x ;
    m_real = x;
}

// change imaginary part
void ComplexNumber::changeImaginary()
{
    std::cout<< "Nhap phan ao moi: ";
    double x;
    std::cin>> x ;
    m_imaginary = x;
}
ComplexNumber::~ComplexNumber(){}