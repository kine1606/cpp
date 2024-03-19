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
    void output() const;

    double get_degree() const;
    double get_coeff() const;
    Monomial get_monomial() const;

    void set_coeff(double);
    void set_degree(double);
    void set_monomial(double, double);

    void change_Monomial();
    double Calc_x0(const int&);
    Monomial derivative();
    Monomial sum_Monomial(const Monomial&);
    ~Monomial();
};
