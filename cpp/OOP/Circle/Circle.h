#pragma once
const double PI = 3.14159265359;
class Circle
{
public:
    Circle();
    Circle(double x, double y, double r);
    void input();
    void output(const double&, const double&);
    double circumference();
    double Square();
    ~Circle();
private:
    double m_x;
    double m_y;
    double m_r;
};
