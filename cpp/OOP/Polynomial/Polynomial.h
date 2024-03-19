#pragma once
#include <vector>
class Polynomial
{

public:
    Polynomial();
    void input_Polynomial();
    void output_Polynomial() const;
    Polynomial Plus_polynomial(const Polynomial&);
    Polynomial Minus_polynomial(const Polynomial&);
    double Calc_xzero(const double&) const;
    ~Polynomial();
private:
    unsigned int m_degree;
    std::vector <int> coeff;
};