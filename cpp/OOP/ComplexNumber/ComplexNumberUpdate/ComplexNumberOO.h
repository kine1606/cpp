#pragma once
#include <iostream>
class ComplexNumber
{
public:
    ComplexNumber();
    ComplexNumber(double, double);
    double getReal();
    double getImag();
    ComplexNumber getCN();
    void setCN(double, double);
    void setReal(double);
    void setImag(double);
    ComplexNumber operator+(const ComplexNumber&);
    ComplexNumber operator-(const ComplexNumber&);
    ComplexNumber operator*(const ComplexNumber&);
    ComplexNumber operator/(const ComplexNumber&);

    bool operator==(const ComplexNumber&);
    bool operator!=(const ComplexNumber&);
    bool operator>(const ComplexNumber&);
    bool operator>=(const ComplexNumber&);
    bool operator<(const ComplexNumber&);
    bool operator<=(const ComplexNumber&);

    friend std::istream &operator >> (std::istream &in, ComplexNumber&x);
    friend std::ostream &operator << (std::ostream &out, const ComplexNumber&x);
    void changeReal();
    void changeImaginary();
    ~ComplexNumber();
private:
    double m_real;
    double m_imaginary;
};