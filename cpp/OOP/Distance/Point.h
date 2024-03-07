#pragma once
class Point
{
public:
    Point();
    Point(double x, double y);
    void input();
    void output(const Point& ,const double&);
    double calc(const Point& );
    ~Point();
private:
    double m_x;
    double m_y;
};