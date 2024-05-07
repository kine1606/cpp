#include <iostream>
#include "ComplexNumberOO.h"
#include <cmath>
// default constructor
ComplexNumber::ComplexNumber()
{
    m_real = 0;
    m_imaginary = 0;
}

// init constructor
ComplexNumber::ComplexNumber(double x, double y):m_real(x),m_imaginary(y){};
// get & set
double ComplexNumber::getImag(){return m_imaginary;}
double ComplexNumber::getReal(){return m_real;}
ComplexNumber ComplexNumber::getCN()
{
    ComplexNumber temp;
    temp.m_real = m_real;
    temp.m_imaginary = m_imaginary;
    return temp;
}
void ComplexNumber::setImag(double imaginary){m_imaginary = imaginary;}
void ComplexNumber::setReal(double real){m_real = real;}
void ComplexNumber::setCN(double real, double imaginary)
{
    m_real = real;
    m_imaginary = imaginary;
}



// operator overloading
    // sum
ComplexNumber ComplexNumber::operator+(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    temp.m_real = m_real + rhsCN.m_real;
    temp.m_imaginary = m_imaginary + rhsCN.m_imaginary;
    return temp;
}

    // minus 2 complex numbers
ComplexNumber ComplexNumber::operator-(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    temp.m_real = m_real - rhsCN.m_real;
    temp.m_imaginary = m_imaginary - rhsCN.m_imaginary;
    return temp;
}

    // mult 2 complex numbers
ComplexNumber ComplexNumber::operator*(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    temp.m_real = m_real * rhsCN.m_real - m_imaginary * rhsCN.m_imaginary;
    temp.m_imaginary = m_real * rhsCN.m_real + m_imaginary * rhsCN.m_imaginary;
    return temp;
}

    // div 2 complex numbers
ComplexNumber ComplexNumber::operator/(const ComplexNumber& rhsCN)
{
    ComplexNumber temp;
    double x = pow(m_imaginary, 2) + pow(rhsCN.m_imaginary, 2);
    temp.m_real = (m_real * rhsCN.m_real + m_imaginary * rhsCN.m_imaginary) / x;
    temp.m_imaginary = (rhsCN.m_real * m_imaginary - m_real * rhsCN.m_imaginary) / x;
    return temp;
}

    // compare 
bool ComplexNumber::operator==(const ComplexNumber& rhsCN)
{
    double m_module1 = sqrt(m_imaginary*m_imaginary + m_real*m_real);
    double m_module2 = sqrt(rhsCN.m_imaginary*rhsCN.m_imaginary + rhsCN.m_real*rhsCN.m_real);
    if(m_module1== m_module2) return true;
    return false;
}
bool ComplexNumber::operator!=(const ComplexNumber& rhsCN)
{
    double m_module1 = sqrt(m_imaginary*m_imaginary + m_real*m_real);
    double m_module2 = sqrt(rhsCN.m_imaginary*rhsCN.m_imaginary + rhsCN.m_real*rhsCN.m_real);
    if(m_module1!= m_module2) return true;
    return false;
}
bool ComplexNumber::operator>=(const ComplexNumber& rhsCN)
{
    double m_module1 = sqrt(m_imaginary*m_imaginary + m_real*m_real);
    double m_module2 = sqrt(rhsCN.m_imaginary*rhsCN.m_imaginary + rhsCN.m_real*rhsCN.m_real);
    if(m_module1>= m_module2) return true;
    return false;
}
bool ComplexNumber::operator<=(const ComplexNumber& rhsCN)
{
    double m_module1 = sqrt(m_imaginary*m_imaginary + m_real*m_real);
    double m_module2 = sqrt(rhsCN.m_imaginary*rhsCN.m_imaginary + rhsCN.m_real*rhsCN.m_real);
    if(m_module1 <= m_module2) return true;
    return false;
}
bool ComplexNumber::operator>(const ComplexNumber& rhsCN)
{
    double m_module1 = sqrt(m_imaginary*m_imaginary + m_real*m_real);
    double m_module2 = sqrt(rhsCN.m_imaginary*rhsCN.m_imaginary + rhsCN.m_real*rhsCN.m_real);
    if(m_module1 > m_module2) return true;
    return false;
}
bool ComplexNumber::operator<(const ComplexNumber& rhsCN)
{
    double m_module1 = sqrt(m_imaginary*m_imaginary + m_real*m_real);
    double m_module2 = sqrt(rhsCN.m_imaginary*rhsCN.m_imaginary + rhsCN.m_real*rhsCN.m_real);
    if(m_module1 < m_module2) return true;
    return false;
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

// iostream 
std::istream& operator>>(std::istream& in, ComplexNumber& x)
{
    std::cout<< "Nhap phan thuc: ";
    in >> x.m_real;
    std::cout<< "Nhap phan ao: ";
    in >> x.m_imaginary;
    return in;
    
}
std::ostream& operator<<(std::ostream& out, const ComplexNumber& x)
{
    if(x.m_real == 0 && x.m_imaginary !=0)
        out << x.m_imaginary << "i" <<'\n';

    else if(x.m_imaginary == 0 && x.m_real !=0)
        out << x.m_real <<'\n';

    else if (x.m_imaginary == 0 && x.m_real ==0) 
        out<< 0 <<'\n';  
    else 
    {
        if(x.m_imaginary>0)
            out << x.m_real << " + " << x.m_imaginary <<"i" <<'\n';
        else 
            out << x.m_real << " " << x.m_imaginary <<"i" <<'\n';
    }
    return out;
}
