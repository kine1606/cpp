#pragma once 
class Monomial
{
private:
    double m_coeff;
    double m_degree;
public:
    Monomial();
    Monomial(const double&, const double&);
    void input();
    void output();
    void change_Monomial();
    double Calc_x0(const int&);
    Monomial derivative();
    Monomial sum_Monomial(const Monomial&);
    ~Monomial();
};
