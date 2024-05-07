#pragma once
#include <vector>
#include <iostream>
class Polynomial
{
public:
    Polynomial();
    Polynomial operator-(const Polynomial&);
    Polynomial operator+(const Polynomial&);
    friend std::istream& operator>>(std::istream& in, Polynomial& x);
    friend std::ostream& operator<<(std::ostream& out, const Polynomial& x) ;
    double Calc_xzero(const double&) const;
    ~Polynomial();
private:
    unsigned int m_degree;
    std::vector <int> coeff;
};