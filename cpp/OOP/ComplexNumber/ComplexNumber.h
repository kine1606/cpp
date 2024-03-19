#pragma once
class ComplexNumber
{
public:
    ComplexNumber();
    ComplexNumber(double, double);
    void input();
    void output();
    ComplexNumber sum(const ComplexNumber&);
    ComplexNumber diff(const ComplexNumber&);
    ComplexNumber mult(const ComplexNumber&);
    ComplexNumber div(const ComplexNumber&);
    void changeReal();
    void changeImaginary();
    ~ComplexNumber();
private:
    double m_real;
    double m_imaginary;
};